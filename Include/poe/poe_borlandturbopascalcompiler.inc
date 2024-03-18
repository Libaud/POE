{========================================================================================
  Include : poe_borlandturbopascalcompiler.inc
  Description : Pascal Object Environment (POE) Library is inspireed from somes inc
                configuration files of many libraries likes JediVCL for exemple.
                It purpose a good way for prepared conditional compilaton on Delphi,
                Lazarus or Typhon. And a solution for portable code too.
  Author : Frédéric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 03 - Création
 ========================================================================================}

{$ifdef VER15} // Turbo Pascal for Windows 1.5	NA	NA	NA
  {$defINE POE_TURBOPASCAL}
  {$define TURBOPASCAL}
  {$define POE_TURBOPASCALWINDOWS}
  {$define TURBOPASCALWINDOWS}
{$endif}
{$ifdef VER10} // Turbo Pascal for Windows 1.0	NA	NA	NA
  {$defINE POE_TURBOPASCAL}
  {$define TURBOPASCAL}
  {$define POE_TURBOPASCALWINDOWS}
  {$define TURBOPASCALWINDOWS}
{$endif}
{$ifdef VER60} // Turbo Pascal 6.0	NA	NA	NA
  {$defINE POE_TURBOPASCAL}
  {$define TURBOPASCAL}
{$endif}
{$ifdef VER55} // Turbo Pascal 5.5	NA	NA	NA
  {$defINE POE_TURBOPASCAL}
  {$define TURBOPASCAL}
{$endif}
{$ifdef VER50} // Turbo Pascal 5.0	NA	NA	NA
  {$defINE POE_TURBOPASCAL}
  {$define TURBOPASCAL}
{$endif}
{$ifdef VER40} // Turbo Pascal 4.0	NA	NA	NA
  {$defINE POE_TURBOPASCAL}
  {$define TURBOPASCAL}
{$endif}



