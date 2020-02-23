// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "HwSimV1.h"
#include "HwDesign.h"
#include "Blink.h"

HwSimV1::HwSimV1()
  : __super(), hwDesignName("default")
{
}

HwSimV1::~HwSimV1()
{
}

bool HwSimV1::appSetupCL(CommandLine* cLine)
{
  V_true(cLine->addCommandWord("led_trivial", new SetStringVarCommandLineAction("led_trivial", hwDesignName)));
  //  V_true(cLine->addCommandWord("blink", UnImplCommandLineAction::Create("blink")));
  NFI("");
  return true;
}

bool HwSimV1::appConfig(CommandLine* cLine)
{
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
  ElectronicFactory* factory = new ElectronicFactory();
  TimeSim* timeSim = factory->createTimeSim();

  HwDesignDictionary* designDictionary = new HwDesignDictionary();

  designDictionary->applyDesign(hwDesignName, factory);
  NFI("");

  //!!!!!!!!!!
  // startSim();
  // setResult(?);
  
  return true;
}

