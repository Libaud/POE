{========================================================================================
  Include : poe_borlandpascalcompiler.inc
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

{$ifdef VER70} // Borland Pascal 7.0	NA	NA	NA
  {$define POE_BP}
  {$define POE_BORLANDPASCAL}
  {$define BP}
  {$define BORLANDPASCAL}
{$endif}



