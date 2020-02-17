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

  NYI("");
  return false;
}


