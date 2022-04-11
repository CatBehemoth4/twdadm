program TWD;

uses
  System.StartUpCopy,
  FMX.Forms,
  maindev in 'maindev.pas' {Form1};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
