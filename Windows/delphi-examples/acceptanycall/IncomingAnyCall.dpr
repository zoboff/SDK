program IncomingAnyCall;

uses
  Vcl.Forms,
  Unit1 in 'Unit1.pas' {Form1},
  HardwareForm in '..\utils\HardwareForm.pas' {frmHardware};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.Title := 'IncomingAnyCall';
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
