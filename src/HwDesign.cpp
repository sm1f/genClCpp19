// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "HwDesign.h"

HwDesign::HwDesign()
  : __super()
{
}

bool HwDesign::apply(ElectronicFactory* factory)
{
  NYI("");
  return false;
}

LedTrivialDesign::LedTrivialDesign()
  : __super()
{
}
				    

bool LedTrivialDesign::apply(ElectronicFactory* factory)
{
  Led* led = factory->createLed("blinkLed");
  PowerSupply5v* power = factory->createPowerSupply5v("Power5v");
  factory->createWireConnection("power2led", "src", "dest",
				power->get5v(), led->powerIn());
  factory->createWireConnection("led2ground", "src", "dest",
				led->powerIn(), power->getGround());
  return true;
}

HwDesignDictionary::HwDesignDictionary()
  : __super()
{
  mapName2Design["led_trivial"] = new LedTrivialDesign();
}

bool HwDesignDictionary::applyDesign(string designName, ElectronicFactory* factory)
{
  String2HwDesign::iterator it = mapName2Design.find(designName);
  if (it == mapName2Design.end()) {
    cout << "Error:  Hw design not found: " << designName << endl;

    cout << "mapName2Design content size: " << mapName2Design.size() << endl;
    for (String2HwDesign::iterator it2 = mapName2Design.begin();  it2 != mapName2Design.end(); ++it2) {
      cout << "  " << it2->first << endl;
    }
    
  } else {
    HwDesign* hw = it->second;
    return hw->apply(factory);
  }

  return false;
}





