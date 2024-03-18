{*****************************************************************************

 Pascal Object Environment Library

 Description : Pascal Object Environment Library is inspireed from somes inc
               configuration files of many libraries likes JediVCL for exemple.

 Author(s) : Frédéric Libaud

 File : poenv.inc

        Principal include file for POE library
 =============================================================================
 History :

 *****************************************************************************}

{$ifdef TYPHON}
  {$ifdef LCL_FULLVERSION = 8030000}
    {$define LCL_VERSION8030000}
    {$define LCL_VERSION8030000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 8020000}
    {$define LCL_VERSION8020000}
    {$define LCL_VERSION8020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 8010000}
    {$define LCL_VERSION8010000}
    {$define LCL_VERSION8010000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 8000000}
    {$define LCL_VERSION8000000}
    {$define LCL_VERSION8000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7090000}
    {$define LCL_VERSION7090000}
    {$define LCL_VERSION7090000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7080000}
    {$define LCL_VERSION7080000}
    {$define LCL_VERSION7080000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7070000}
    {$define LCL_VERSION7070000}
    {$define LCL_VERSION7070000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7060000}
    {$define LCL_VERSION7060000}
    {$define LCL_VERSION7060000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7050000}
    {$define LCL_VERSION7050000}
    {$define LCL_VERSION7050000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7040000}
    {$define LCL_VERSION7040000}
    {$define LCL_VERSION7040000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7030000}
    {$define LCL_VERSION7030000}
    {$define LCL_VERSION7030000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7020000}
    {$define LCL_VERSION7020000}
    {$define LCL_VERSION7020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7010000}
    {$define LCL_VERSION7010000}
    {$define LCL_VERSION7010000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 7000000}
    {$define LCL_VERSION7000000}
    {$define LCL_VERSION7000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6090000}
    {$define LCL_VERSION6090000}
    {$define LCL_VERSION6090000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6080000}
    {$define LCL_VERSION6080000}
    {$define LCL_VERSION6080000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6070000}
    {$define LCL_VERSION6070000}
    {$define LCL_VERSION6070000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6060000}
    {$define LCL_VERSION6060000}
    {$define LCL_VERSION6060000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6050000}
    {$define LCL_VERSION6050000}
    {$define LCL_VERSION6050000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6040000}
    {$define LCL_VERSION6040000}
    {$define LCL_VERSION6040000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6030000}
    {$define LCL_VERSION6030000}
    {$define LCL_VERSION6030000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6020000}
    {$define LCL_VERSION6020000}
    {$define LCL_VERSION6020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6015000}
    {$define LCL_VERSION6015000}
    {$define LCL_VERSION6015000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6010000}
    {$define LCL_VERSION6010000}
    {$define LCL_VERSION6010000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 6000000}
    {$define LCL_VERSION6000000}
    {$define LCL_VERSION6000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5090000}
    {$define LCL_VERSION5090000}
    {$define LCL_VERSION5090000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5080000}
    {$define LCL_VERSION5080000}
    {$define LCL_VERSION5080000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5070000}
    {$define LCL_VERSION5070000}
    {$define LCL_VERSION5070000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5060000}
    {$define LCL_VERSION5060000}
    {$define LCL_VERSION5060000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5050000}
    {$define LCL_VERSION5050000}
    {$define LCL_VERSION5050000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5040000}
    {$define LCL_VERSION5040000}
    {$define LCL_VERSION5040000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5030000}
    {$define LCL_VERSION5030000}
    {$define LCL_VERSION5030000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5020000}
    {$define LCL_VERSION5020000}
    {$define LCL_VERSION5020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5010000}
    {$define LCL_VERSION5010000}
    {$define LCL_VERSION5010000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 5000000}
    {$define LCL_VERSION5000000}
    {$define LCL_VERSION5000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4092000}
    {$define LCL_VERSION4092000}
    {$define LCL_VERSION4092000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4090000}
    {$define LCL_VERSION4090000}
    {$define LCL_VERSION4090000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4080000}
    {$define LCL_VERSION4080000}
    {$define LCL_VERSION4080000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4070000}
    {$define LCL_VERSION4070000}
    {$define LCL_VERSION4070000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4060000}
    {$define LCL_VERSION4060000}
    {$define LCL_VERSION4060000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4050000}
    {$define LCL_VERSION4050000}
    {$define LCL_VERSION4050000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4040000}
    {$define LCL_VERSION4040000}
    {$define LCL_VERSION4040000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4030000}
    {$define LCL_VERSION4030000}
    {$define LCL_VERSION4030000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4020000}
    {$define LCL_VERSION4020000}
    {$define LCL_VERSION4020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4010000}
    {$define LCL_VERSION4010000}
    {$define LCL_VERSION4010000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 4000000}
    {$define LCL_VERSION4000000}
    {$define LCL_VERSION4000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 3010000}
    {$define LCL_VERSION3010000}
    {$define LCL_VERSION3010000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 3000000}
    {$define LCL_VERSION3000000}
    {$define LCL_VERSION3000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2090000}
    {$define LCL_VERSION2090000}
    {$define LCL_VERSION2090000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2080000}
    {$define LCL_VERSION2080000}
    {$define LCL_VERSION2080000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2070000}
    {$define LCL_VERSION2070000}
    {$define LCL_VERSION2070000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2060000}
    {$define LCL_VERSION2060000}
    {$define LCL_VERSION2060000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2050000}
    {$define LCL_VERSION2050000}
    {$define LCL_VERSION2050000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2040000}
    {$define LCL_VERSION2040000}
    {$define LCL_VERSION2040000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2030000}
    {$define LCL_VERSION2030000}
    {$define LCL_VERSION2030000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2020000}
    {$define LCL_VERSION2020000}
    {$define LCL_VERSION2020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2010000}
    {$define LCL_VERSION2010000}
    {$define LCL_VERSION2010000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 2000000}
    {$define LCL_VERSION2000000}
    {$define LCL_VERSION2000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1080000}
    {$define LCL_VERSION1080000}
    {$define LCL_VERSION1080000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1070000}
    {$define LCL_VERSION1070000}
    {$define LCL_VERSION1070000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1060000}
    {$define LCL_VERSION1060000}
    {$define LCL_VERSION1060000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1050000}
    {$define LCL_VERSION1050000}
    {$define LCL_VERSION1050000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1040000}
    {$define LCL_VERSION1040000}
    {$define LCL_VERSION1040000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1030000}
    {$define LCL_VERSION1030000}
    {$define LCL_VERSION1030000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1020000}
    {$define LCL_VERSION1020000}
    {$define LCL_VERSION1020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1010000}
    {$define LCL_VERSION1010000}
    {$define LCL_VERSION1010000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 1000000}
    {$define LCL_VERSION1000000}
    {$define LCL_VERSION1000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 999000}
    {$define LCL_VERSION999000}
    {$define LCL_VERSION999000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 998000}
    {$define LCL_VERSION998000}
    {$define LCL_VERSION998000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 994000}
    {$define LCL_VERSION994000}
    {$define LCL_VERSION994000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 988000}
    {$define LCL_VERSION988000}
    {$define LCL_VERSION988000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 966000}
    {$define LCL_VERSION966000}
    {$define LCL_VERSION966000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 944400}
    {$define LCL_VERSION944400}
    {$define LCL_VERSION944400_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 933000}
    {$define LCL_VERSION933000}
    {$define LCL_VERSION933000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 922000}
    {$define LCL_VERSION922000}
    {$define LCL_VERSION922000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 910000}
    {$define LCL_VERSION910000}
    {$define LCL_VERSION910000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 900000}
    {$define LCL_VERSION900000}
    {$define LCL_VERSION900000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 899000}
    {$define LCL_VERSION899000}
    {$define LCL_VERSION899000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 888000}
    {$define LCL_VERSION888000}
    {$define LCL_VERSION888000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 855000}
    {$define LCL_VERSION855000}
    {$define LCL_VERSION855000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 822000}
    {$define LCL_VERSION822000}
    {$define LCL_VERSION822000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 810000}
    {$define LCL_VERSION810000}
    {$define LCL_VERSION810000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 788000}
    {$define LCL_VERSION788000}
    {$define LCL_VERSION788000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 777000}
    {$define LCL_VERSION777000}
    {$define LCL_VERSION777000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 755000}
    {$define LCL_VERSION755000}
    {$define LCL_VERSION755000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 744000}
    {$define LCL_VERSION744000}
    {$define LCL_VERSION744000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 737000}
    {$define LCL_VERSION737000}
    {$define LCL_VERSION737000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 672000}
    {$define LCL_VERSION672000}
    {$define LCL_VERSION672000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 641000}
    {$define LCL_VERSION641000}
    {$define LCL_VERSION641000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 610000}
    {$define LCL_VERSION610000}
    {$define LCL_VERSION610000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION  = 560000}
    {$define LCL_VERSION560000}
    {$define LCL_VERSION560000_UP}
  {$endif}
{$endif}



