{*****************************************************************************

 Pascal Object Environment Library

 Description : Pascal Object Environment Library is inspireed from somes inc
               configuration files of many libraries likes JediVCL for exemple.

 Author(s) : Frédéric Libaud

 File : poe_compiler.inc

        Compiler include file
 =============================================================================
 History :

 *****************************************************************************}

// Free Pascal
{$ifdef FPC}
  {$define POE_FPC}
  {$define POE_FREEPASCAL}
  {$define FREEPASCAL}
  {$ifdef LAZ_VERSION}
    {$define LAZARUS}
  {$endif}
  {$ifdef CT_VERSION)}
    {$define TYPHON}
  {$endif}
{$endif}

