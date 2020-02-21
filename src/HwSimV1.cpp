// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "HwSimV1.h"
#include "HwDesign.h"
#include "Blink.h"

HwSimV1::HwSimV1()
{
}

HwSimV1::~HwSimV1()
{
}

bool HwSimV1::appConfig(CommandLine* cLine)
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

  ElectronicFactory* factory = new ElectronicFactory();
  TimeSim* timeSim = factory->createTimeSim();
  return blink(factory);
}

bool HwSimV1::blink(ElectronicFactory* factory)
{
  TimeSim* timeSim = factory->createTimeSim();
  timeSim->reset(0);
  Blink* blink = new Blink();

  return blink->applyBlink(factory, timeSim);
}

