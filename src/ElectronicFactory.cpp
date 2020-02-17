// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "ElectronicFactory.h"

ElectronicFactory::ElectronicFactory()
  : Factory()
{
}

ElectronicFactory::~ElectronicFactory()
{
}

Led* ElectronicFactory::createLed(string nameString)
{
  return new Led(nameString);
}

PowerSupply5v* ElectronicFactory::createPowerSupply5v(string nameString)
{
  return new PowerSupply5v(nameString);
}



