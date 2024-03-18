{========================================================================================
  Include : poe_compilers.inc
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

