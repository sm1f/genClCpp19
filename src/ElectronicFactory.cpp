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

TimeSim* ElectronicFactory::CreateTimeSim()
{
  return new TimeSim();
}

Led* ElectronicFactory::CreateLed(string nameString)
{
  return new Led(nameString);
}

PowerSupply5v* ElectronicFactory::CreatePowerSupply5V(string nameString)
{
  return new PowerSupply5v(nameString);
}



