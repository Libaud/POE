{========================================================================================
  Include : poe_bds.inc
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

{$if defined(POE_DELPHI) or defined(POE_BCB)}
  {$ifdef VER360}
    {$define POE_ATHENS}
    {$define ATHENS}
    {$define POE_RADSTUDIO}
    {$define RADSTUDIO}
    {$define POE_RADSTUDIO120}
    {$define RADSTUDIO120}
  {$endif}
  {$ifdef VER350}
    {$define POE_ALEXANDRIA}
    {$define ALEXANDRIA}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIO110}
    {$define RADSTUDIO}
    {$define RADSTUDIO110}
  {$endif}
  {$ifdef VER340}
    {$define POE_SYDNEY}
    {$define SYDNEY}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIO104}
    {$define RADSTUDIO}
    {$define RADSTUDIO104}
  {$endif}
  {$ifdef VER330}
    {$define POE_RIO}
    {$define RIO}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIO103}
    {$define RADSTUDIO}
    {$define RADSTUDIO103}
  {$endif}
  {$ifdef VER320}
    {$define POE_TOKYO}
    {$define TOKYO}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIO102}
    {$define RADSTUDIO}
    {$define RADSTUDIO102}
  {$endif}
  {$ifdef VER310}
    {$define POE_BERLIN}
    {$define BERLIN}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIO101}
    {$define RADSTUDIO}
    {$define RADSTUDIO101}
  {$endif}
  {$ifdef VER300}
    {$define POE_SEATTLE}
    {$define SEATTLE}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIO10}
    {$define RADSTUDIO}
    {$define RADSTUDIO10}
  {$endif}
  {$ifdef VER290}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIOXE8}
    {$define RADSTUDIO}
    {$define RADSTUDIOXE8}
  {$endif}
  {$ifdef VER280}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIOXE7}
    {$define RADSTUDIO}
    {$define RADSTUDIOXE7}
  {$endif}
  {$ifdef VER270}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIOXE6}
    {$define RADSTUDIO}
    {$define RADSTUDIOXE6}
  {$endif}
  {$ifdef VER260}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIOXE5}
    {$define RADSTUDIO}
    {$define RADSTUDIOXE5}
  {$endif}
  {$ifdef VER250}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIOXE4}
    {$define RADSTUDIO}
    {$define RADSTUDIOXE4}
  {$endif}
  {$ifdef VER240}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIOXE3}
    {$define RADSTUDIO}
    {$define RADSTUDIOXE3}
  {$endif}
  {$ifdef VER230}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIOXE2}
    {$define RADSTUDIO}
    {$define RADSTUDIOXE2}
  {$endif}
  {$ifdef VER220}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIOXE}
    {$define RADSTUDIO}
    {$define RADSTUDIOXE}
  {$endif}
  {$ifdef VER210}
    {$define POE_RADSTUDIO}
    {$define POE_RADSTUDIO2010}
    {$define RADSTUDIO}
    {$define RADSTUDIO2010}
  {$endif}
  //{$ifdef VER200}
  //{$endif}
  //{$ifdef VER190}
  //{$endif}
  //{$ifdef VER185}
  //{$endif}
  //{$ifdef VER180}
  //{$endif}
  //{$ifdef VER170}
  //{$endif}
  //{$ifdef VER160}
  //{$endif}
  //{$ifdef VER150}
  //{$endif}
  //{$ifdef VER140}
  //{$endif}
  //{$ifdef VER130}
  //{$endif}
  //{$ifdef VER125}
  //{$endif}
  //{$ifdef VER120}
  //{$endif}
  //{$ifdef VER110}
  //{$endif}
  //{$ifdef VER100}
  //{$endif}
  //{$ifdef VER93}
  //{$endif}
  //{$ifdef VER90}
  //{$endif}
{$endif}
