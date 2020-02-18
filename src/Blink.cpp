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

  Wire* wire1 = factory->createWireConnection("power2led", "src", "dest",
				   power->get5v(), led->powerIn());
  Wire* wire2 = factory->createWireConnection("led2ground", "src", "dest",
				    led->powerIn(), power->getGround());

  NFI("");
  
  return false;
}


