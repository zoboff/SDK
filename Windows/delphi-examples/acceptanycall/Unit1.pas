unit Unit1;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ExtCtrls, Vcl.OleCtrls,
  TrueConf_CallXLib_TLB;

type
  TForm1 = class(TForm)
    TrueConfCallX1: TTrueConfCallX;
    Shape1: TShape;
    procedure TrueConfCallX1XAfterStart(Sender: TObject);
    procedure TrueConfCallX1ServerConnected(ASender: TObject;
      const eventDetails: WideString);
    procedure TrueConfCallX1InviteReceived(ASender: TObject;
      const eventDetails: WideString);
    procedure TrueConfCallX1XLogin(Sender: TObject);
    procedure TrueConfCallX1XLoginError(ASender: TObject; errorCode: Integer);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

uses LoginForm;

procedure TForm1.TrueConfCallX1InviteReceived(ASender: TObject;
  const eventDetails: WideString);
begin
  Application.Restore;   // why not...?
  TrueConfCallX1.accept; // Accept an incoming call
end;

procedure TForm1.TrueConfCallX1ServerConnected(ASender: TObject;
  const eventDetails: WideString);
begin
  with TfrmLogin.Create(self) do
  try
    if ShowModal = mrOk then
    begin
      TrueConfCallX1.login(Trim(edID.Text), edPassword.Text);
    end;
  finally
    Free;
  end;
end;

procedure TForm1.TrueConfCallX1XAfterStart(Sender: TObject);
begin
  TrueConfCallX1.XSetCameraByIndex(0); // use your "first" camera
  TrueConfCallX1.connectToServer(''); // Connect to TrueConf Online cloud service // Otherwise write your server IP address
end;

procedure TForm1.TrueConfCallX1XLogin(Sender: TObject);
begin
  Shape1.Brush.Color := clGreen; // Just for show
end;

procedure TForm1.TrueConfCallX1XLoginError(ASender: TObject;
  errorCode: Integer);
begin
  ShowMessage(Format('Login error: %d', [errorCode]));
end;

end.
