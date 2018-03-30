unit ServerForm;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls;

type
  TfrmServer = class(TForm)
    Button1: TButton;
    btnOk: TButton;
    chbTCOServer: TCheckBox;
    Label1: TLabel;
    edServer: TEdit;
    procedure chbTCOServerClick(Sender: TObject);
    procedure edServerChange(Sender: TObject);
  private
    function GetServer: string;
    procedure CheckEnabled_Ok;
    { Private declarations }
  public
    { Public declarations }
    property Server: string read GetServer;
  end;

  function GetServerName(var AServer: string): boolean;

implementation

{$R *.dfm}

function GetServerName(var AServer: string): boolean;
begin
  Result := False;

  with TfrmServer.Create(Application) do
  try
    Result := (ShowModal = mrOk);
    if Result then
      AServer := Server;
  finally
    Free;
  end;
end;

{ TfrmServer }

procedure TfrmServer.chbTCOServerClick(Sender: TObject);
begin
  if chbTCOServer.Checked then
  begin
    edServer.Enabled := False;
    edServer.Color := Color;
  end
  else begin
    edServer.Enabled := True;
    edServer.Color := clWindow;
  end;
  CheckEnabled_Ok;
end;

procedure TfrmServer.CheckEnabled_Ok;
begin
  btnOk.Enabled := chbTCOServer.Checked or (Length(GetServer) > 0)
end;

procedure TfrmServer.edServerChange(Sender: TObject);
begin
  CheckEnabled_Ok;
end;

function TfrmServer.GetServer: string;
begin
  if chbTCOServer.Checked then
    Result := ''
  else
    Result := Trim(edServer.Text);
end;

end.
