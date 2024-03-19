Pascal Object Envrionment (POE) is a code library whose objective is to provide all the necessary elements to enable portable code on Pascal Objet environments and compilers (Delphi, Lazarus, Typhon).

Usage

To use the POE library, simply include the poe.inc file the project source file (*.ctpr, *.dpr, *.ppr*). The instruction is as follows:

	{$i poe.inc}
	
Example:

	program MonProgramme;
	
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
	
Remarks

Ideally for the easiest use, it is better to have the files placed in an inclusion directory (Include) common to your projects. Access is relative. For example:

	..\..\Include, on Windows ;

	../../Include, on Linux.
