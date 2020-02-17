// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "Blink.h"

Blink::Blink()
  : Story()
{
}

Blink::~Blink()
{
}

bool Blink::applyBlink(ElectronicFactory* factory, TimeSim* timeSim)
{
  V_NotNull(factory);
  V_NotNull(timeSim);

  Led* led = factory->createLed("blinkLed");
  PowerSupply* power = factory->createPowerSupply5v("Power5v");

  //  Wire* factory->createwire("power2led", power->get5v(), led->powerIn());
  
  NYI("");
  return false;
}


