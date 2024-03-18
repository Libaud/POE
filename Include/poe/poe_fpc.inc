{========================================================================================
  Include : poe_fpc.inc
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

{$ifdef POE_FPC}
  {$ifdef VER3_2_2}
  {$define POE_FPC322}
  {$define POE_FPC322_UP}
  {$define FPC322}
  {$define FPC322_UP}
  {$define POE_FPC3}
  {$define FPC3}
  {$endif}
  {$ifdef VER3_2_0}
  {$define POE_FPC320}
  {$define POE_FPC320_UP}
  {$define FPC320}
  {$define FPC320_UP}
  {$define POE_FPC3}
  {$define FPC3}
  {$endif}
  {$ifdef VER3_1_1}
  {$define POE_FPC311}
  {$define POE_FPC311_UP}
  {$define FPC311}
  {$define FPC311_UP}
  {$define POE_FPC3}
  {$define FPC3}
  {$endif}
  {$ifdef VER3_0_4}
  {$define POE_FPC304}
  {$define POE_FPC304_UP}
  {$define FPC304}
  {$define FPC304_UP}
  {$define POE_FPC3}
  {$define FPC3}
  {$endif}
  {$ifdef VER3_0_2}
  {$define POE_FPC302}
  {$define POE_FPC302_UP}
  {$define FPC302}
  {$define FPC302_UP}
  {$define POE_FPC3}
  {$define FPC3}
  {$endif}
  {$ifdef VER3_0_0}
  {$define POE_FPC300}
  {$define POE_FPC300_UP}
  {$define FPC300}
  {$define FPC300_UP}
  {$define POE_FPC3}
  {$define FPC3}
  {$endif}
  {$ifdef VER2_6_4}
  {$define POE_FPC264}
  {$define POE_FPC264_UP}
  {$define FPC264}
  {$define FPC264_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_6_2}
  {$define POE_FPC262}
  {$define POE_FPC262_UP}
  {$define FPC262}
  {$define FPC262_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_6_0}
  {$define POE_FPC260}
  {$define POE_FPC260_UP}
  {$define FPC260}
  {$define FPC260_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_4_4}
  {$define POE_FPC244}
  {$define POE_FPC244_UP}
  {$define FPC244}
  {$define FPC244_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_4_2}
  {$define POE_FPC242}
  {$define POE_FPC242_UP}
  {$define FPC242}
  {$define FPC242_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_4_0}
  {$define POE_FPC240}
  {$define POE_FPC240_UP}
  {$define FPC240}
  {$define FPC240_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_2_4}
  {$define POE_FPC224}
  {$define POE_FPC224_UP}
  {$define FPC224}
  {$define FPC224_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_2_2}
  {$define POE_FPC222}
  {$define POE_FPC222_UP}
  {$define FPC222}
  {$define FPC222_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_2_0}
  {$define POE_FPC220}
  {$define POE_FPC220_UP}
  {$define FPC220}
  {$define FPC220_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_0_4}
  {$define POE_FPC204}
  {$define POE_FPC204_UP}
  {$define FPC204}
  {$define FPC204_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER2_0_0}
  {$define POE_FPC200}
  {$define POE_FPC200_UP}
  {$define FPC200}
  {$define FPC200_UP}
  {$define POE_FPC2}
  {$define FPC2}
  {$endif}
  {$ifdef VER1_0_10}
  {$define POE_FPC1010}
  {$define POE_FPC1010_UP}
  {$define FPC1010}
  {$define FPC1010_UP}
  {$define POE_FPC1}
  {$define FPC1}
  {$endif}
  {$ifdef VER1_0_6}
  {$define POE_FPC106}
  {$define POE_FPC106_UP}
  {$define FPC106}
  {$define FPC106_UP}
  {$define POE_FPC1}
  {$define FPC1}
  {$endif}
  {$ifdef VER1_0_4}
  {$define POE_FPC104}
  {$define POE_FPC104_UP}
  {$define FPC104}
  {$define FPC104_UP}
  {$define POE_FPC1}
  {$define FPC1}
  {$endif}
  {$ifdef VER1_0}
  {$define POE_FPC10}
  {$define POE_FPC10_UP}
  {$define FPC10}
  {$define FPC10_UP}
  {$define POE_FPC1}
  {$define FPC1}
  {$endif}
{$endif}
