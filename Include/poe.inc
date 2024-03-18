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

{$i poe/poe_compilers.inc}

// Delphi Environment
{$ifdef POE_DELPHI}
  {$i poe/poe_delphi.inc}
  {$if FRAMEWORK_VCL}
  {$i poe/poe_vcl.inc}
  {$endif}
  {$if FRAMEWORK_FMX}
  {$i poe/poe_fmx.inc}
  {$endif}
  {$i poe/poe_bds.inc}
{$endif}

// C++ Builder
{$ifdef POE_CPPBUILDER}
  {$i poe/poe_cppbuilder.inc}
  {$if FRAMEWORK_VCL}
  {$i poe/poe_vcl.inc}
  {$endif}
  {$if FRAMEWORK_FMX}
  {$i poe/poe_fmx.inc}
  {$endif}
  {$i poe/poe_bds.inc}
{$endif}

// Kylix
{$ifdef POE_KEYLIX}
  {$i poe/poe_kylix.inc}
{$endif}

// Borland Pascal
{$ifdef POE_BP}
  {$i poe/poe_borlandpascal.inc}
{$endif}

// Turbo Pascal
{$ifdef POE_TURBOPASCAL}
  $i poe/poe_turbopascal.inc
{$endif}

// Lazarus Environment
{$ifdef POE_LAZARUS}
  {$i poe/poe_lazarus.inc}
{$endif}

// Typhon Environment
{$ifdef POE_TYPHON}
  {$i poe/poe_typhon.inc}
{$endif}
