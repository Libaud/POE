{========================================================================================
  Include : poe_kylix.inc
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

{$ifdef POE_KYLIX}
  {$if DECLARED(RTLVERSION)
    {$if RTLVersion = 14.50}
      {$define POE_KYLIX3}
      {$define KYLIX3}
    {$endif}
    {$fi RTLVersion = 14.20}
      {$define POE_KYLIX2}
      {$define KYLIX2}
    {$endif}
    {$IF RTLVersion = 14.00}
      {$define POE_KYLIX1}
      {$define KYLIX1}
    {$endif}
{$endif}

