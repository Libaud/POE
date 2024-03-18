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

{$ifdef LAZARUS}
  {$ifdef LCL_FULLVERSION = 3020000}
    {$define LCL_VERSION3020000}
    {$define LCL_VERSION3020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 3000000}
    {$define LCL_VERSION3000000}
    {$define LCL_VERSION3000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2020006}
    {$define LCL_VERSION2020006}
    {$define LCL_VERSION2020006_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2020004}
    {$define LCL_VERSION2020004}
    {$define LCL_VERSION2020004_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2020002}
    {$define LCL_VERSION2020002}
    {$define LCL_VERSION2020002_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2020000}
    {$define LCL_VERSION2020000}
    {$define LCL_VERSION2020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2000012}
    {$define LCL_VERSION2000012}
    {$define LCL_VERSION2000012_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2000010}
    {$define LCL_VERSION2000010}
    {$define LCL_VERSION2000010_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2000008}
  {$define LCL_VERSION2000008}
  {$define LCL_VERSION2000008_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2000006}
    {$define LCL_VERSION2000006}
    {$define LCL_VERSION2000006_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2000004}
    {$define LCL_VERSION2000004}
    {$define LCL_VERSION2000004_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 2000002}
    {$define LCL_VERSION2000002}
    {$define LCL_VERSION2000002_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1080004}
  {$define LCL_VERSION1080004}
  {$define LCL_VERSION1080004_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1080002}
    {$define LCL_VERSION1080002}
    {$define LCL_VERSION1080002_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1080000}
    {$define LCL_VERSION1080000}
    {$define LCL_VERSION1080000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1060002}
    {$define LCL_VERSION1060002}
    {$define LCL_VERSION1060002_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1060000}
    {$define LCL_VERSION1060000}
    {$define LCL_VERSION1060000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1040004}
    {$define LCL_VERSION1040004}
    {$define LCL_VERSION1060000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1040002}
    {$define LCL_VERSION1040002}
    {$define LCL_VERSION1040002_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1040000}
    {$define LCL_VERSION1040000}
    {$define LCL_VERSION1040000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1020006}
    {$define LCL_VERSION1020006}
    {$define LCL_VERSION1020006_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1020004}
    {$define LCL_VERSION1020004}
    {$define LCL_VERSION1020004_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1020002}
    {$define LCL_VERSION1020002}
    {$define LCL_VERSION1020002_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1020000}
    {$define LCL_VERSION1020000}
    {$define LCL_VERSION1020000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1000014}
    {$define LCL_VERSION1000014}
    {$define LCL_VERSION1000014_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1000012}
    {$define LCL_VERSION1000012}
    {$define LCL_VERSION1000012_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1000010}
    {$define LCL_VERSION1000010}
    {$define LCL_VERSION1000010_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1000008}
    {$define LCL_VERSION1000008}
    {$define LCL_VERSION1000008_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1000006}
    {$define LCL_VERSION1000006}
    {$define LCL_VERSION1000006_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1000004}
    {$define LCL_VERSION1000004}
    {$define LCL_VERSION1000004_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1000002}
    {$define LCL_VERSION1000002}
    {$define LCL_VERSION1000002_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 1000000}
    {$define LCL_VERSION1000000}
    {$define LCL_VERSION1000000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0093002}
    {$define LCL_VERSION0093002}
    {$define LCL_VERSION0093002_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0092802}
    {$define LCL_VERSION0092802}
    {$define LCL_VERSION0092802_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0092800}
    {$define LCL_VERSION0092800}
    {$define LCL_VERSION0092800_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0092602}
    {$define LCL_VERSION0092602}
    {$define LCL_VERSION0092800_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0092600}
    {$define LCL_VERSION0092600}
    {$define LCL_VERSION0092600_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0092400}
    {$define LCL_VERSION0092400}
    {$define LCL_VERSION0092400_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0092200}
    {$define LCL_VERSION0092200}
    {$define LCL_VERSION0092200_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0092000}
    {$define LCL_VERSION0092000}
    {$define LCL_VERSION0092000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0091800}
    {$define LCL_VERSION0092000}
    {$define LCL_VERSION0092000_UP}
  {$endif}
  {$ifdef LCL_FULLVERSION = 0091600}
    {$define LCL_VERSION0091600}
    {$define LCL_VERSION0091600_UP}
  {$endif}
{$endif}

