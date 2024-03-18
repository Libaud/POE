program POESample;

{$APPTYPE CONSOLE}

{$i POE.inc}

{$R *.res}

uses
  System.SysUtils;

begin
  try
    { TODO -oUser -cConsole Main : Insérer du code ici }
  except
    on E: Exception do
      Writeln(E.ClassName, ': ', E.Message);
  end;
end.
