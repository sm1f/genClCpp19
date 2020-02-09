// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "HwSimV1.h"

HwSimV1::HwSimV1()
{
}

HwSimV1::~HwSimV1()
{
}

bool HwSimV1::appConig(int argc, const char** argv)
{
  return true;
}

bool HwSimV1::appShowConfig()
{
  cout << "Config" << endl;
  return true;
}

bool HwSimV1::appRun()
{
  NFI("");
  return blink();
}

bool HwSimV1::blink()
{
  NYI("")
  
  return true;
}

