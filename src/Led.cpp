// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "Led.h"

Led::Led(string ledName, ElectronicConnection* powerConn, ElectronicConnection* groundConn)
  : __super(ledName), fromPower(powerConn), toGround(groundConn)
{
}

ElectronicConnection* Led::groundOut()
{
  return toGround;
}

ElectronicConnection* Led::powerIn()
{
  return fromPower;
}



