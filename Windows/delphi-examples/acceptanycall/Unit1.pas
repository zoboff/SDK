unit Unit1;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ExtCtrls, Vcl.OleCtrls,
  TrueConf_CallXLib_TLB, Vcl.StdCtrls;

type
  TForm1 = class(TForm)
    TrueConfCallX1: TTrueConfCallX;
    Shape1: TShape;
    btnHardware: TButton;
    procedure TrueConfCallX1XAfterStart(Sender: TObject);
    procedure TrueConfCallX1ServerConnected(ASender: TObject;
      const eventDetails: WideString);
    procedure TrueConfCallX1InviteReceived(ASender: TObject;
      const eventDetails: WideString);
    procedure TrueConfCallX1XLogin(Sender: TObject);
    procedure btnHardwareClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

uses HardwareForm;

procedure TForm1.btnHardwareClick(Sender: TObject);
begin
  with TfrmHardware.Create(self) do
  try
    if ShowDialog(Application.Title, TrueConfCallX1) then
    begin

    end;
  finally
    Free;
  end;
end;

procedure TForm1.TrueConfCallX1InviteReceived(ASender: TObject;
  const eventDetails: WideString);
begin
  Application.Restore;   // why not...?
  TrueConfCallX1.accept; // Accept an incoming call
end;

procedure TForm1.TrueConfCallX1ServerConnected(ASender: TObject;
  const eventDetails: WideString);
begin
   TrueConfCallX1.login('125000', '125000'); // Write your account data: "user id" and "password"
end;

procedure TForm1.TrueConfCallX1XAfterStart(Sender: TObject);
begin
  with TfrmHardware.Create(self) do
  try
    if ApplySettings(Application.Title, TrueConfCallX1) then
    begin

    end;
  finally
    Free;
  end;

  //TrueConfCallX1.XSetCameraByIndex(0); // use your "first" camera
  TrueConfCallX1.connectToServer(''); // Connect to TrueConf Online cloud service // Otherwise write your server IP address
end;

procedure TForm1.TrueConfCallX1XLogin(Sender: TObject);
begin
  Shape1.Brush.Color := clGreen; // Just for show
end;

end.
