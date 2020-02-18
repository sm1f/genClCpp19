// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "Wire.h"


Wire::Wire(string nameString, ElectronicConnection* connectionA, ElectronicConnection* connectionB)
  : ElectronicThing(name), endA(connectionA), endB(connectionB)
{
}

ElectronicConnection* Wire::getEndA()
{
  return endA;
}

ElectronicConnection* Wire::getEndB()
{
  return endB;
}




