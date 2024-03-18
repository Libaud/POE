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
  {$if CT_VERSION = 830}
  {$define POE_TYPHON830}
  {$define POE_TYPHON830_UP}
  {$endif}
  {$if CT_VERSION = 820}
  {$define POE_TYPHON820}
  {$define POE_TYPHON820_UP}
  {$endif}
  {$if CT_VERSION = 810}
  {$define POE_TYPHON810}
  {$define POE_TYPHON810_UP}
  {$endif}
  {$if CT_VERSION = 800}
  {$define POE_TYPHON800}
  {$define POE_TYPHON800_UP}
  {$endif}
  {$if CT_VERSION = 790}
  {$define POE_TYPHON790}
  {$define POE_TYPHON790_UP}
  {$endif}
  {$if CT_VERSION = 780}
  {$define POE_TYPHON780}
  {$define POE_TYPHON780_UP}
  {$endif}
  {$if CT_VERSION = 770}
  {$define POE_TYPHON770}
  {$define POE_TYPHON770_UP}
  {$endif}
  {$if CT_VERSION = 760}
  {$define POE_TYPHON760}
  {$define POE_TYPHON760_UP}
  {$endif}
  {$if CT_VERSION = 750}
  {$define POE_TYPHON750}
  {$define POE_TYPHON750_UP}
  {$endif}
  {$if CT_VERSION = 740}
  {$define POE_TYPHON740}
  {$define POE_TYPHON740_UP}
  {$endif}
  {$if CT_VERSION = 730}
  {$define POE_TYPHON730}
  {$define POE_TYPHON730_UP}
  {$endif}
  {$if CT_VERSION = 720}
  {$define POE_TYPHON720}
  {$define POE_TYPHON720_UP}
  {$endif}
  {$if CT_VERSION = 710}
  {$define POE_TYPHON710}
  {$define POE_TYPHON710_UP}
  {$endif}
  {$if CT_VERSION = 700}
  {$define POE_TYPHON700}
  {$define POE_TYPHON700_UP}
  {$endif}
  {$if CT_VERSION = 690}
  {$define POE_TYPHON690}
  {$define POE_TYPHON690_UP}
  {$endif}
  {$if CT_VERSION = 680}
  {$define POE_TYPHON680}
  {$define POE_TYPHON680_UP}
  {$endif}
  {$if CT_VERSION = 670}
  {$define POE_TYPHON670}
  {$define POE_TYPHON670_UP}
  {$endif}
  {$if CT_VERSION = 660}
  {$define POE_TYPHON660}
  {$define POE_TYPHON660_UP}
  {$endif}
  {$if CT_VERSION = 650}
  {$define POE_TYPHON650}
  {$define POE_TYPHON650_UP}
  {$endif}
  {$if CT_VERSION = 640}
  {$define POE_TYPHON640}
  {$define POE_TYPHON640_UP}
  {$endif}
  {$if CT_VERSION = 630}
  {$define POE_TYPHON630}
  {$define POE_TYPHON630_UP}
  {$endif}
  {$if CT_VERSION = 620}
  {$define POE_TYPHON620}
  {$define POE_TYPHON620_UP}
  {$endif}
  {$if CT_VERSION = 610}
  {$define POE_TYPHON610}
  {$define POE_TYPHON610_UP}
  {$endif}
  {$if CT_VERSION = 600}
  {$define POE_TYPHON600}
  {$define POE_TYPHON600_UP}
  {$endif}
  {$if CT_VERSION = 590}
  {$define POE_TYPHON590}
  {$define POE_TYPHON590_UP}
  {$endif}
  {$if CT_VERSION = 580}
  {$define POE_TYPHON580}
  {$define POE_TYPHON580_UP}
  {$endif}
  {$if CT_VERSION = 570}
  {$define POE_TYPHON570}
  {$define POE_TYPHON570_UP}
  {$endif}
  {$if CT_VERSION = 560}
  {$define POE_TYPHON560}
  {$define POE_TYPHON560_UP}
  {$endif}
  {$if CT_VERSION = 550}
  {$define POE_TYPHON550}
  {$define POE_TYPHON550_UP}
  {$endif}
  {$if CT_VERSION = 540}
  {$define POE_TYPHON540}
  {$define POE_TYPHON540_UP}
  {$endif}
  {$if CT_VERSION = 530}
  {$define POE_TYPHON530}
  {$define POE_TYPHON530_UP}
  {$endif}
  {$if CT_VERSION = 520}
  {$define POE_TYPHON520}
  {$define POE_TYPHON520_UP}
  {$endif}
  {$if CT_VERSION = 510}
  {$define POE_TYPHON510}
  {$define POE_TYPHON510_UP}
  {$endif}
  {$if CT_VERSION = 500}
  {$define POE_TYPHON500}
  {$define POE_TYPHON500_UP}
  {$endif}
  {$if CT_VERSION = 492}
  {$define POE_TYPHON492}
  {$define POE_TYPHON492_UP}
  {$endif}
  {$if CT_VERSION = 490}
  {$define POE_TYPHON490}
  {$define POE_TYPHON490_UP}
  {$endif}
  {$if CT_VERSION = 480}
  {$define POE_TYPHON480}
  {$define POE_TYPHON480_UP}
  {$endif}
  {$if CT_VERSION = 470}
  {$define POE_TYPHON470}
  {$define POE_TYPHON470_UP}
  {$endif}
  {$if CT_VERSION = 460}
  {$define POE_TYPHON460}
  {$define POE_TYPHON460_UP}
  {$endif}
  {$if CT_VERSION = 450}
  {$define POE_TYPHON450}
  {$define POE_TYPHON450_UP}
  {$endif}
  {$if CT_VERSION = 440}
  {$define POE_TYPHON440}
  {$define POE_TYPHON440_UP}
  {$endif}
  {$if CT_VERSION = 430}
  {$define POE_TYPHON430}
  {$define POE_TYPHON430_UP}
  {$endif}
  {$if CT_VERSION = 420}
  {$define POE_TYPHON420}
  {$define POE_TYPHON420_UP}
  {$endif}
  {$if CT_VERSION = 410}
  {$define POE_TYPHON410}
  {$define POE_TYPHON410_UP}
  {$endif}
  {$if CT_VERSION = 400}
  {$define POE_TYPHON400}
  {$define POE_TYPHON400_UP}
  {$endif}
  {$if CT_VERSION = 310}
  {$define POE_TYPHON310}
  {$define POE_TYPHON310_UP}
  {$endif}
  {$if CT_VERSION = 300}
  {$define POE_TYPHON300}
  {$define POE_TYPHON300_UP}
  {$endif}
  {$if CT_VERSION = 290}
  {$define POE_TYPHON290}
  {$define POE_TYPHON290_UP}
  {$endif}
  {$if CT_VERSION = 280}
  {$define POE_TYPHON280}
  {$define POE_TYPHON280_UP}
  {$endif}
  {$if CT_VERSION = 270}
  {$define POE_TYPHON270}
  {$define POE_TYPHON270_UP}
  {$endif}
  {$if CT_VERSION = 260}
  {$define POE_TYPHON260}
  {$define POE_TYPHON260_UP}
  {$endif}
  {$if CT_VERSION = 250}
  {$define POE_TYPHON250}
  {$define POE_TYPHON250_UP}
  {$endif}
  {$if CT_VERSION = 240}
  {$define POE_TYPHON240}
  {$define POE_TYPHON240_UP}
  {$endif}
  {$if CT_VERSION = 230}
  {$define POE_TYPHON230}
  {$define POE_TYPHON230_UP}
  {$endif}
  {$if CT_VERSION = 220}
  {$define POE_TYPHON220}
  {$define POE_TYPHON220_UP}
  {$endif}
  {$if CT_VERSION = 210}
  {$define POE_TYPHON210}
  {$define POE_TYPHON210_UP}
  {$endif}
  {$if CT_VERSION = 200}
  {$define POE_TYPHON200}
  {$define POE_TYPHON200_UP}
  {$endif}
  {$if CT_VERSION = 180}
  {$define POE_TYPHON180}
  {$define POE_TYPHON180_UP}
  {$endif}
  {$if CT_VERSION = 170}
  {$define POE_TYPHON170}
  {$define POE_TYPHON170_UP}
  {$endif}
  {$if CT_VERSION = 160}
  {$define POE_TYPHON160}
  {$define POE_TYPHON160_UP}
  {$endif}
  {$if CT_VERSION = 150}
  {$define POE_TYPHON150}
  {$define POE_TYPHON150_UP}
  {$endif}
  {$if CT_VERSION = 140}
  {$define POE_TYPHON140}
  {$define POE_TYPHON140_UP}
  {$endif}
  {$if CT_VERSION = 130}
  {$define POE_TYPHON130}
  {$define POE_TYPHON130_UP}
  {$endif}
  {$if CT_VERSION = 120}
  {$define POE_TYPHON120}
  {$define POE_TYPHON120_UP}
  {$endif}
  {$if CT_VERSION = 110}
  {$define POE_TYPHON110}
  {$define POE_TYPHON110_UP}
  {$endif}
  {$if CT_VERSION = 100}
  {$define POE_TYPHON100}
  {$define POE_TYPHON100_UP}
  {$endif}
  {$if CT_VERSION = 0999}
  {$define POE_TYPHON0999}
  {$define POE_TYPHON0999_UP}
  {$endif}
  {$if CT_VERSION = 0998}
  {$define POE_TYPHON0998}
  {$define POE_TYPHON0998_UP}
  {$endif}
  {$if CT_VERSION = 0994}
  {$define POE_TYPHON0994}
  {$define POE_TYPHON0994_UP}
  {$endif}
  {$if CT_VERSION = 0988}
  {$define POE_TYPHON0988}
  {$define POE_TYPHON0988_UP}
  {$endif}
  {$if CT_VERSION = 0966}
  {$define POE_TYPHON0966}
  {$define POE_TYPHON0966_UP}
  {$endif}
  {$if CT_VERSION = 0944}
  {$define POE_TYPHON0944}
  {$define POE_TYPHON0944_UP}
  {$endif}
  {$if CT_VERSION = 0933}
  {$define POE_TYPHON0933}
  {$define POE_TYPHON0933_UP}
  {$endif}
  {$if CT_VERSION = 0922}
  {$define POE_TYPHON0922}
  {$define POE_TYPHON0922_UP}
  {$endif}
  {$if CT_VERSION = 0910}
  {$define POE_TYPHON0910}
  {$define POE_TYPHON0910_UP}
  {$endif}
  {$if CT_VERSION = 0900}
  {$define POE_TYPHON0900}
  {$define POE_TYPHON0900_UP}
  {$endif}
  {$if CT_VERSION = 0899}
  {$define POE_TYPHON0899}
  {$define POE_TYPHON0899_UP}
  {$endif}
  {$if CT_VERSION = 0888}
  {$define POE_TYPHON0888}
  {$define POE_TYPHON0888_UP}
  {$endif}
  {$if CT_VERSION = 0855}
  {$define POE_TYPHON0855}
  {$define POE_TYPHON0855_UP}
  {$endif}
  {$if CT_VERSION = 0822}
  {$define POE_TYPHON0822}
  {$define POE_TYPHON0822_UP}
  {$endif}
  {$if CT_VERSION = 0810}
  {$define POE_TYPHON0810}
  {$define POE_TYPHON0810_UP}
  {$endif}
  {$if CT_VERSION = 0788}
  {$define POE_TYPHON0788}
  {$define POE_TYPHON0788_UP}
  {$endif}
  {$if CT_VERSION = 0777}
  {$define POE_TYPHON0777}
  {$define POE_TYPHON0777_UP}
  {$endif}
  {$if CT_VERSION = 0755}
  {$define POE_TYPHON0755}
  {$define POE_TYPHON0755_UP}
  {$endif}
  {$if CT_VERSION = 0744}
  {$define POE_TYPHON0744}
  {$define POE_TYPHON0744_UP}
  {$endif}
  {$if CT_VERSION = 0737}
  {$define POE_TYPHON0737}
  {$define POE_TYPHON0737_UP}
  {$endif}
  {$if CT_VERSION = 0672}
  {$define POE_TYPHON0672}
  {$define POE_TYPHON0672_UP}
  {$endif}
  {$if CT_VERSION = 0641}
  {$define POE_TYPHON0641}
  {$define POE_TYPHON0641_UP}
  {$endif}
  {$if CT_VERSION = 0610}
  {$define POE_TYPHON0610}
  {$define POE_TYPHON0610_UP}
  {$endif}
  {$if CT_VERSION = 0566}
  {$define POE_TYPHON0566}
  {$define POE_TYPHON0566_UP}
  {$endif}
{$endif}
