unit main;

{$ifdef FPC}
{$mode objfpc}{$H+}
{$endif}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs;

type
  TForm1 = class(TForm)
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$ifdef POE_FREEPASCAL}
  {$ifdef POE_TYPHON}
  {$R *.frm}
  {$else}
  {$R *.lfm}
  {$endif}
{$else}
  {$R *.dfm}
{$endif}

end.

