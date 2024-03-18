program POEGUISample;

{$i poe.inc}

uses
  Vcl.Forms,
  main in 'POEGUISample\main.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.Run;
end.
