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
{$define POE_LAZARUS}

{ Defined Lazarus Version

  Uncomment the $define clause for
  the Lazarus environment used
                                  }
{$define POE_LAZARUS164}
//{$define POE_LAZARUS162}
//{$define POE_LAZARUS16}
//{$define POE_LAZARUS144}
//{$define POE_LAZARUS142}
//{$define POE_LAZARUS140}
//{$define POE_LAZARUS126}
//{$define POE_LAZARUS124}
//{$define POE_LAZARUS12}
//{$define POE_LAZARUS12RC2}
//{$define POE_LAZARUS12RC1}
//{$define POE_LAZARUS1199}
//{$define POE_LAZARUS1014}
//{$define POE_LAZARUS1012}
//{$define POE_LAZARUS1010}
//{$define POE_LAZARUS108}
//{$define POE_LAZARUS106}
//{$define POE_LAZARUS104}
//{$define POE_LAZARUS102}
//{$define POE_LAZARUS10}
//{$define POE_LAZARUS10RC2}
//{$define POE_LAZARUS10RC1}
//{$define POE_LAZARUS09304}
//{$define POE_LAZARUS09304RC3}
//{$define POE_LAZARUS09304RC2}
//{$define POE_LAZARUS09304RC1}
//{$define POE_LAZARUS09302}
//{$define POE_LAZARUS09302RC2}
//{$define POE_LAZARUS09302RC1}
//{$define POE_LAZARUS0930}
//{$define POE_LAZARUS09282}
//{$define POE_LAZARUS0928}
//{$define POE_LAZARUS09262}
//{$define POE_LAZARUS0926}
//{$define POE_LAZARUS0924}
//{$define POE_LAZARUS0922}
//{$define POE_LAZARUS0920}
//{$define POE_LAZARUS0918}
//{$define POE_LAZARUS0916}
//{$define POE_LAZARUS0914}
//{$define POE_LAZARUS0912}
//{$define POE_LAZARUS0910}
//{$define POE_LAZARUS098}
//{$define POE_LAZARUS096}
//{$define POE_LAZARUS094}
//{$define POE_LAZARUS091}
//{$define POE_LAZARUS0903}
//{$define POE_LAZARUS085}
//{$define POE_LAZARUS084}
//{$define POE_LAZARUS082}
//{$define POE_LAZARUS08}
//{$define POE_LAZARUS05}
//{$define POE_LAZARUS01}
//{$define POE_LAZARUS005}

{$i freepascalcompiler.inc}
{$i lcl.inc}

{$ifdef Win64}
  {$define POE_WIN64}
{$else}
  {$ifdef Win32}
    {$define POE_WIN32}
  {$else}
    {$define POE_WIN16}
  {$endif}
{$endif}


