// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "Wire.h"


Wire::Wire(string wireName, ElectronicConnection* connectionA, ElectronicConnection* connectionB)
  : ElectronicThing(wireName), endA(connectionA), endB(connectionB)
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




