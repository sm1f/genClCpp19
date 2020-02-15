// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "HwSimV1.h"
#include "HwFactory.h"

HwSimV1::HwSimV1()
{
}

HwSimV1::~HwSimV1()
{
}

bool HwSimV1::appConig(int argc, string* argv)
{
  V_true(cLine->addCommandWord("blink", UnImplCommandLineAction::Create("blink")));
  
  NFI("");
  return true;
}

bool HwSimV1::appShowConfig()
{
  NYI("");
  return true;
}

bool HwSimV1::appRun()
{
  NFI("");

  HwFactory* factory = new HwFactory();
  TimeSim* timeSim = factory->CreateTimeSim();
  return blink(factory, timeSim);
}

bool HwSimV1::blink(HwFactory* factory, TimeSim* timeSim)
{
  timeSim->reset(0);
  
  NFI("");

  return true;
}

