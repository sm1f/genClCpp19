// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "PowerSupply.h"

PowerSupply::PowerSupply(string nameString, ElectronicConnection* groundConn)
  : __super(nameString), ground(groundConn), power5v(NULL)
{
}

ElectronicConnection* PowerSupply::get5v()
{
  return power5v;
}

ElectronicConnection* PowerSupply::getGround()
{
  return ground;
}

