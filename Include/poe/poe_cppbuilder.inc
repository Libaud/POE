{========================================================================================
  Include : poe_cppbuilder.inc
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

{$ifdef POE_CPPBUILDER}
  {$ifdef VER360}
    {$define POE_BCB360}
    {$define POE_BCB360_UP}
    {$define BCB360}
    {$define BCB360_UP}
  {$endif}
  {$ifdef VER340}
    {$define POE_BCB350}
    {$define POE_BCB350_UP}
    {$define BCB350}
    {$define BCB350_UP}
  {$endif}
  {$ifdef VER340}
    {$define POE_BCB340}
    {$define POE_BCB340_UP}
    {$define BCB340}
    {$define BCB340_UP}
  {$endif}
  {$ifdef VER330} // Delphi 10.3 Rio / C++Builder 10.3 Rio	26	260	33.0
    {$define POE_BCB330}
    {$define POE_BCB330_UP}
    {$define BCB330}
    {$define BCB330_UP}
  {$endif}
  {$ifdef VER320} // Delphi 10.2 Tokyo / C++Builder 10.2 Tokyo	25	250	32.0
    {$define POE_BCB320}
    {$define POE_BCB320_UP}
    {$define BCB320}
    {$define BCB320_UP}
  {$endif}
  {$ifdef VER310} // Delphi 10.1 Berlin / C++Builder 10.1 Berlin	24	240	31.0
    {$define POE_BCB310}
    {$define POE_BCB310_UP}
    {$define BCB310}
    {$define BCB310_UP}
  {$endif}
  {$ifdef VER300} // Delphi 10 Seattle / C++Builder 10 Seattle	23	230	30.0
    {$define POE_BCB300}
    {$define POE_BCB300_UP}
    {$define BCB300}
    {$define BCB300_UP}
  {$endif}
  {$ifdef VER290} // Delphi XE8 / C++Builder XE8	22	220	29.0
    {$define POE_BCB290}
    {$define POE_BCB290_UP}
    {$define BCB290}
    {$define BCB290_UP}
  {$endif}
  {$ifdef VER280} // Delphi XE7 / C++Builder XE7	21	210	28.0
    {$define POE_BCB280}
    {$define POE_BCB280_UP}
    {$define BCB280}
    {$define BCB280_UP}
  {$endif}
  {$ifdef VER270} // Delphi XE6 / C++Builder XE6	20	200	27.0
    {$define POE_BCB270}
    {$define POE_BCB270_UP}
    {$define BCB270}
    {$define BCB270_UP}
  {$endif}
  {$ifdef VER260} // Delphi XE5 / C++Builder XE5	19	190	26.0
    {$define POE_BCB260}
    {$define POE_BCB260_UP}
    {$define BCB260}
    {$define BCB260_UP}
  {$endif}
  {$ifdef VER250} // Delphi XE4 / C++Builder XE4	18	180	25.0
    {$define POE_BCB250}
    {$define POE_BCB250_UP}
    {$define BCB250}
    {$define BCB250_UP}
  {$endif}
  {$ifdef VER240} // Delphi XE3 / C++Builder XE3	17	170	24.0
    {$define POE_BCB240}
    {$define POE_BCB240_UP}
    {$define BCB240}
    {$define BCB240_UP}
  {$endif}
  {$ifdef VER230} // Delphi XE2 / C++Builder XE2	16
    {$define POE_BCB230}
    {$define POE_BCB230_UP}
    {$define BCB230}
    {$define BCB230_UP}
  {$endif}
  {$ifdef VER220} // Delphi XE / C++Builder XE	15	150	22.0
    {$define POE_BCB220}
    {$define POE_BCB220_UP}
    {$define BCB220}
    {$define BCB220_UP}
  {$endif}
  {$ifdef VER210} // Delphi 2010 / C++Builder 2010	14	140	21.0
    {$define POE_BCB210}
    {$define POE_BCB210_UP}
    {$define BCB210}
    {$define BCB210_UP}
  {$endif}
  {$ifdef VER200} // Delphi 2009 / C++Builder 2009	12	120	20.0
    {$define POE_BCB200}
    {$define POE_BCB200_UP}
    {$define BCB200}
    {$define BCB200_UP}
  {$endif}
  {$ifdef VER185}
    {$define POE_BCB185}
    {$define POE_BCB185_UP}
    {$define BCB185}
    {$define BCB185_UP}
  {$endif}
  {$ifdef VER180} // Delphi 2006 / C++Builder 2006	10	100	18.0
    {$define POE_BCB180}
    {$define POE_BCB180_UP}
    {$define BCB180}
    {$define BCB180_UP}
  {$endif}
  //
  {$ifdef VER140} // Delphi 6 / C++Builder 6	6	60	14.0
    {$define POE_BCB140}
    {$define POE_BCB140_UP}
    {$define BCB140}
    {$define BCB140_UP}
  {$endif}
  {$ifdef VER130} // Delphi 5 / C++Builder 5	5	NA	NA
    {$define POE_BCB130}
    {$define POE_BCB130_UP}
    {$define BCB130}
    {$define BCB130_UP}
  {$endif}
  {$ifdef VER125} // C++Builder 4	4	NA	NA
    {$define POE_BCB125}
    {$define POE_BCB125_UP}
    {$define BCB125}
    {$define BCB125_UP}
  {$ifdef VER110} // C++Builder 3	3	NA	NA
    {$define POE_BCB110}
    {$define POE_BCB110_UP}
    {$define BCB110}
    {$define BCB110_UP}
  {$endif}
  {$ifdef VER93} // C++Builder 1	NA	NA	NA
    {$define POE_BCB93}
    {$define POE_BCB93_UP}
    {$define BCB93}
    {$define BCB93_UP}
  {$endif}
{$endif}

