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

{*****************************************************************************

 Pascal Object Free Stuff

 Free Pascal Compiler Free Stuff

 *****************************************************************************}
{$i poe_fpc.inc}
{$i poe_lcl.inc}

{$define POE_TYPHON}

{$i poe_typhonversion.inc}

//{$ifdef Win64}
//  {$define POE_WIN64}
//  {$define POE_WIN64_UP}
//  {$define POE_WIN32_UP}
//{$endif}
//
//{$ifdef Win32}
//  {$define POE_WIN32}
//  {$define POE_WIN32_UP}
//{$endif}
//
//{$ifdef Win16}
//  {$define POE_WIN16}
//  {$define POE_WIN16_UP}
//{$endif}

