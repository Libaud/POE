{========================================================================================
  Include : poe.inc
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

{$ifdef POE_DELPHI or POE_CPPBUILDER}
  {$define POE_VCL}
  {$define VCL}
  {$ifdef VER340}
    {$define RTL340}
    {$define RTL340_UP}
  {$endif}
  // C++ Builder
  {$ifdef VER330} // Delphi 10.3 Rio / C++Builder 10.3 Rio	26	260	33.0
    {$define RTL330}
    {$define RTL330_UP}
  {$endif}
  {$ifdef VER320} // Delphi 10.2 Tokyo / C++Builder 10.2 Tokyo	25	250	32.0
    {$define RTL320}
    {$define RTL320_UP}
  {$endif}
  {$ifdef VER310} // Delphi 10.1 Berlin / C++Builder 10.1 Berlin	24	240	31.0
    {$define RTL310}
    {$define RTL310_UP}
  {$endif}
  {$ifdef VER300} // Delphi 10 Seattle / C++Builder 10 Seattle	23	230	30.0
    {$define RTL300}
    {$define RTL300_UP}
  {$endif}
  {$ifdef VER290} // Delphi XE8 / C++Builder XE8	22	220	29.0
    {$define RTL290}
    {$define RTL290_UP}
  {$endif}
  {$ifdef VER280} // Delphi XE7 / C++Builder XE7	21	210	28.0
    {$define RTL280}
    {$define RTL280_UP}
  {$endif}
  {$ifdef VER270} // Delphi XE6 / C++Builder XE6	20	200	27.0
    {$define RTL270}
    {$define RTL270_UP}
  {$endif}
  {$ifdef VER260} // Delphi XE5 / C++Builder XE5	19	190	26.0
    {$define RTL260}
    {$define RTL260_UP}
  {$endif}
  {$ifdef VER250} // Delphi XE4 / C++Builder XE4	18	180	25.0
    {$define RTL250}
    {$define RTL250_UP}
  {$endif}
  {$ifdef VER240} // Delphi XE3 / C++Builder XE3	17	170	24.0
    {$define RTL240}
    {$define RTL240_UP}
  {$endif}
  {$ifdef VER230} // Delphi XE2 / C++Builder XE2	16
    {$define RTL230}
    {$define RTL230_UP}
  {$endif}
  {$ifdef VER220} // Delphi XE / C++Builder XE	15	150	22.0
    {$define RTL220}
    {$define RTL220_UP}
  {$endif}
  {$ifdef VER210} // Delphi 2010 / C++Builder 2010	14	140	21.0
    {$define RTL210}
    {$define RTL210_UP}
  {$endif}
  {$ifdef VER200} // Delphi 2009 / C++Builder 2009	12	120	20.0
    {$define RTL200}
    {$define RTL200_UP}
  {$endif}
  {$ifdef VER185}
    {$define RTL185}
    {$define RTL185_UP}
  {$endif}
  {$ifdef VER180} // Delphi 2006 / C++Builder 2006	10	100	18.0
    {$define RTL180}
    {$define RTL180_UP}
  {$endif}
  {$ifdef VER170} // Delphi 2005	9	90	17.0
    {$define RTL170}
    {$define RTL170_UP}
  {$endif}
  {$ifdef VER160} // Delphi 8 for .Net	8	80	16.0
    {$define RTL160}
    {$define RTL160_UP}
  {$endif}
  {$ifdef VER150} // Delphi 7 (and 7.1)	7	70	15.0
    {$define RTL150}
    {$define RTL150_UP}
  {$endif}
  {$ifdef VER140} // Delphi 6 / C++Builder 6	6	60	14.0
    {$define RTL140}
    {$define RTL140_UP}
  {$endif}
  {$ifdef VER130} // Delphi 5 / C++Builder 5	5	NA	NA
    {$define RTL130}
    {$define RTL130_UP}
  {$endif}
  {$ifdef VER125} // C++Builder 4	4	NA	NA
    {$define RTL125}
    {$define RTL125_UP}
  {$ifdef VER110} // C++Builder 3	3	NA	NA
    {$define RTL110}
    {$define RTL110_UP}
  {$endif}
  {$ifdef VER93} // C++Builder 1	NA	NA	NA
    {$define RTL93}
    {$define RTL93_UP}
  {$endif}
{$endif}

