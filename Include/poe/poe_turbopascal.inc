{========================================================================================
  Include : poe_turbopascal.inc
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

{$ifdef POE_TURBOPASCAL}
  {$ifdef VER10}
    {$define POE_TURBOPASCALWINDOWS15}
    {$define TURBOPASCALWINDOWS15}
  {$endif}
  {$ifdef VER15}
    {$define POE_TURBOPASCALWINDOWS10}
    {$define TURBOPASCALWINDOWS10}
  {$endif}
  {$ifdef VER60}
    {$define POE_TURBOPASCAL60}
    {$define TURBOPASCAL60}
  {$endif}
  {$ifdef VER55}
    {$define POE_TURBOPASCAL55}
    {$define TURBOPASCAL55}
  {$endif}
  {$ifdef VER50}
    {$define POE_TURBOPASCAL50}
    {$define TURBOPASCAL50}
  {$endif}
  {$ifdef VER40}
    {$define POE_TURBOPASCAL40}
    {$define TURBOPASCAL40}
  {$endif}
{$endif}

