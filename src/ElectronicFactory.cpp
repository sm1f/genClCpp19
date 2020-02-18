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

Wire* ElectronicFactory::createWire(string wireName, string endNameA, string endNameB)
{
  ElectronicConnection* aConn = new ElectronicConnection(wireName, endNameA);
  ElectronicConnection* bConn = new ElectronicConnection(wireName, endNameB);

  return new Wire(wireName, aConn, bConn);
}

ElectronicConnectionPoint* ElectronicFactory::connect(string nameString,
				   ElectronicConnection* connectionA,
				   ElectronicConnection* connectionB)
{
  ElectronicConnectionPoint* result = createConnection(nameString);
  addConnection(result, connectionA);
  addConnection(result, connectionB);
  return result;
}


ElectronicConnectionPoint* ElectronicFactory::createConnection(string nameString)
{
  return new ElectronicConnectionPoint(nameString);
}

ElectronicConnectionPoint* ElectronicFactory::addConnection(ElectronicConnectionPoint* point,
							    ElectronicConnection* connection)
{
  point->addConnection(connection);
  return point;
}



