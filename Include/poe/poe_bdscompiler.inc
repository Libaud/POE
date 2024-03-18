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

{$IFDEF VER330} // Delphi 10.3 Rio / C++Builder 10.3 Rio	26	260	33.0
  {$define BDS}
  {$define BDS233}
{$ENDIF}
{$ifdef VER320} // Delphi 10.2 Tokyo / C++Builder 10.2 Tokyo	25	250	32.0
  {$define BDS}
  {$define BDS232}
{$endif}
{$ifdef VER310} // Delphi 10.1 Berlin / C++Builder 10.1 Berlin	24	240	31.0
  {$define BDS}
  {$define BDS231}
{$endif}
{$ifdef VER300} // Delphi 10 Seattle / C++Builder 10 Seattle	23	230	30.0
  {$define BDS}
  {$define BDS230}
{$endif}
{$ifdef VER290} // Delphi XE8 / C++Builder XE8	22	220	29.0
  {$define BDS}
  {$define BDS220}
{$endif}
{$ifdef VER280} // Delphi XE7 / C++Builder XE7	21	210	28.0
  {$define BDS}
  {$define BDS210}
{$endif}
{$ifdef VER270} // Delphi XE6 / C++Builder XE6	20	200	27.0
  {$define BDS}
  {$define BDS200}
{$endif}
{$ifdef VER260} // Delphi XE5 / C++Builder XE5	19	190	26.0
  {$define BDS}
  {$define BDS190}
{$endif}
{$ifdef VER250} // Delphi XE4 / C++Builder XE4	18	180	25.0
  {$define BDS}
  {$define BDS180}
{$endif}
{$ifdef VER240} // Delphi XE3 / C++Builder XE3	17	170	24.0
  {$define BDS}
  {$define BDS170}
{$endif}
{$ifdef VER230} // Delphi XE2 / C++Builder XE2	16	23.0
  {$define BDS}
  {$define BDS160}
{$endif}
{$ifdef VER220} // Delphi XE / C++Builder XE	15	150	22.0
  {$define BDS}
  {$define BDS150}
{$endif}
{$ifdef VER210} // Delphi 2010 / C++Builder 2010	14	140	21.0
  {$define BDS}
  {$define BDS140}
{$endif}
{$ifdef VER200} // Delphi 2009 / C++Builder 2009	12	120	20.0
  {$define BDS}
  {$define BDS120}
{$endif}
{$ifdef VER190} // Delphi 2007 for .Net [1]	11	110	19.0
  {$define BDS}
  {$define BDS110}
{$endif}
{$ifdef VER185}
  {$define BDS}
  {$define BDS110}
{$endif}
{$ifdef VER180} // Delphi 2006 / C++Builder 2006	10	100	18.0
  {$define BDS}
  {$define BDS100}
{$endif}
{$ifdef VER170} // Delphi 2005	9	90	17.0
  {$define BDS}
  {$define BDS90}
{$endif}
{$ifdef VER160} // Delphi 8 for .Net	8	80	16.0
  {$define BDS}
  {$define BDS80}
{$endif}
{$ifdef VER150} // Delphi 7 (and 7.1)	7	70	15.0
  {$define BDS}
  {$define BDS70}
{$endif}
{$ifdef VER140} // Delphi 6 / C++Builder 6	6	60	14.0
  {$define BDS}
  {$define BDS60}
{$endif}
{$ifdef VER130} // Delphi 5 / C++Builder 5	5	NA	NA
  {$define BDS}
  {$define BDS50}
{$endif}
{$ifdef VER125} // C++Builder 4	4	NA	NA
  {$define BDS}
  {$define BDS40}
{$endif}
{$ifdef VER120} // Delphi 4	4	NA	NA
  {$define BDS}
  {$define BDS40}
{$endif}
{$ifdef VER110} // C++Builder 3	3	NA	NA
  {$define BDS}
  {$define BDS30}
{$endif}
{$ifdef VER100} // Delphi 3	3	NA	NA
  {$define BDS}
  {$define BDS30}
{$endif}
{$ifdef VER93} // C++Builder 1	NA	NA	NA
  //{$define BDS}
  //{$define BDS30}
{$endif}
{$ifdef VER90} // Delphi 2	2	NA	NA
  {$define BDS}
  {$define BDS20}
{$endif}
{$ifdef VER80} // Delphi 1	1	NA	NA
  {$define BDS}
  {$define BDS10}
{$endif}
// End of BDS


