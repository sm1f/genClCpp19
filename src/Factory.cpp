// CopyRight Stephen Morrisson 2019, 2020
// All rights reserved.


#include "Factory.h"

Factory::Factory()
  : CppBase()
{
}

Factory::~Factory()
{
}

TimeSim* Factory::createTimeSim()
{
  return new TimeSim();
}

