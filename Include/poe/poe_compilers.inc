{========================================================================================
  Include : poe_compilers.inc
  Description : Pascal Object Environment (POE) Library is inspired by include
                configuration files that many libraries, such as JediVCL, use to compile
                correctly on multiple versions of compilers. 
                Its purpose is a to help prepare conditional compilaton on Delphi,
                Lazarus or Typhon and as a solution for portable code as well. 
  Author : Frédéric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 03 - Création
 ========================================================================================}

{$ifndef fpc}
{$I poe/poe_delphicompiler.inc}
{$I poe/poe_cppbuildercompiler.inc}
{$I poe/poe_kylixcompiler.inc}
{$I poe/poe_bdscompiler.inc}
{$I poe/poe_borlandpascalcompiler.inc}
{$I poe/poe_borlandturbopascalcompiler.inc}
{$else}
{$i poe_fpccompiler.inc}
{$endif}

