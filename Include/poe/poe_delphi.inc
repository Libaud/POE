{========================================================================================
  Include : poe_delphi.inc
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

{$ifdef POE_DELPHI}
  {$ifdef VER360}
    {$define POE_DELPHI360}
    {$define POE_DELPHI360_UP}
    {$define DELPHI360}
    {$define DELPHI360_UP}
  {$endif}
  {$ifdef VER350}
    {$define POE_DELPHI350}
    {$define POE_DELPHI350_UP}
    {$define DELPHI350}
    {$define DELPHI350_UP}
  {$endif}
  {$ifdef VER340} // Delphi 10.4 Sydney / C++ Builder 10.4 Sydney | 21 270 34.0
    {$define POE_DELPHI340}
    {$define POE_DELPHI340_UP}
    {$define POE_DELPHI21}
    {$define POE_DELPHI21_UP}
    {$define DELPHI340}
    {$define DELPHI340_UP}
  {$endif}
  {$ifdef VER330} // Delphi 10.3 Rio / C++Builder 10.3 Rio	26	260	33.0
    {$define POE_DELPHI330}
    {$define POE_DELPHI330_UP}
    {$define POE_DELPHIV3}
    {$define POE_DELPHIV3_UP}
    {$define DELPHI330}
    {$define DELPHI330_UP}
  {$endif}
  {$ifdef VER320} // Delphi 10.2 Tokyo / C++Builder 10.2 Tokyo	25	250	32.0
    {$define DELPHI232}
    {$define POE_DELPHIV3}
    {$define POE_DELPHIV3_UP}
  {$endif}
  {$ifdef VER310} // Delphi 10.1 Berlin / C++Builder 10.1 Berlin	24	240	31.0
    {$define DELPHI231}
    {$define POE_DELPHIV3}
    {$define POE_DELPHIV3_UP}
  {$endif}
  {$ifdef VER300} // Delphi 10 Seattle / C++Builder 10 Seattle	23	230	30.0
    {$define DELPHI230}
  {$endif}
  {$ifdef VER290} // Delphi XE8 / C++Builder XE8	22	220	29.0
    {$define DELPHI220}
    {$define DELPHIXE}
  {$endif}
  {$ifdef VER280} // Delphi XE7 / C++Builder XE7	21	210	28.0
    {$define DELPHI210}
    {$define DELPHIXE}
  {$endif}
  {$ifdef VER270} // Delphi XE6 / C++Builder XE6	20	200	27.0
  {$ifndef BCB}
    {$define DELPHI}
    {$define DELPHI200}
    {$define DELPHIXE}
  {$endif}
  {$endif}
  {$ifdef VER260} // Delphi XE5 / C++Builder XE5	19	190	26.0
    {$define DELPHI190}
    {$define DELPHIXE}
  {$endif}
  {$ifdef VER250} // Delphi XE4 / C++Builder XE4	18	180	25.0
    {$define DELPHI180}
    {$define DELPHIXE}
  {$endif}
  {$ifdef VER240} // Delphi XE3 / C++Builder XE3	17	170	24.0
    {$define DELPHI170}
    {$define DELPHIXE}
  {$endif}
  {$ifdef VER230} // Delphi XE2 / C++Builder XE2	16	23.0
    {$define DELPHI160}
    {$define DELPHIXE}
  {$endif}
  {$endif}
  {$ifdef VER220} // Delphi XE / C++Builder XE	15	150	22.0
    {$define DELPHI150}
    {$define DELPHIXE}
  {$endif}
  {$ifdef VER210} // Delphi 2010 / C++Builder 2010	14	140	21.0
    {$define DELPHI140}
  {$endif}
  {$ifdef VER200} // Delphi 2009 / C++Builder 2009	12	120	20.0
    {$define DELPHI120}
  {$endif}
  {$ifdef VER190} // Delphi 2007 for .Net [1]	11	110	19.0
    {$define DELPHI110}
    {$define DOTNETIMPLEMNTATION}
  {$endif}
  {$ifdef VER185}
    {$define DELPHI110}
  {$endif}
  {$ifdef VER180} // Delphi 2006 / C++Builder 2006	10	100	18.0
    {$define DELPHI100}
  {$endif}
  {$ifdef VER170} // Delphi 2005	9	90	17.0
    {$define DELPHI90}
  {$endif}
  {$ifdef VER160} // Delphi 8 for .Net	8	80	16.0
    {$define DELPHI80}
    {$define DOTNETIMPLEMENTATION}
  {$endif}
  {$ifdef VER150} // Delphi 7 (and 7.1)	7	70	15.0
    {$define DELPHI70}
  {$endif}
  {$ifdef VER140} // Delphi 6 / C++Builder 6	6	60	14.0
    {$define DLEPHI60}
  {$endif}
  {$ifdef VER130} // Delphi 5 / C++Builder 5	5	NA	NA
    {$define DELPHI50}
  {$endif}
  {$ifdef VER120} // Delphi 4	4	NA	NA
    {$define DELPHI40}
  {$endif}
  {$ifdef VER100} // Delphi 3	3	NA	NA
    {$define DELPHI30}
    {$define COMPILER3}
  {$endif}
  {$ifdef VER90} // Delphi 2	2	NA	NA
    {$define DELPHI20}
    {$define COMPILER2}
  {$endif}
  {$ifdef VER80} // Delphi 1	1	NA	NA
    {$define DELPHI10}
    {$define COMPILER10}
  {$endif}
{$endif}
