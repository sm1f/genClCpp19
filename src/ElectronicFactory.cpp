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

Led* ElectronicFactory::createLed(string ledName)
{
  return new Led(ledName,
		 new ElectronicConnection(ledName, "powerConn"),
		 new ElectronicConnection(ledName, "groundConn"));
}

PowerSupply5v* ElectronicFactory::createPowerSupply5v(string supplyName)
{
  return new PowerSupply5v(supplyName,
			   new ElectronicConnection(supplyName, "ground"),
			   new ElectronicConnection(supplyName, "5v"));
}

Wire* ElectronicFactory::createWire(string wireName, string endNameA, string endNameB)
{
  ElectronicConnection* aConn = new ElectronicConnection(wireName, endNameA);
  ElectronicConnection* bConn = new ElectronicConnection(wireName, endNameB);

  return new Wire(wireName, aConn, bConn);
}

Wire* ElectronicFactory::createWireConnection(string wireName, string endNameA, string endNameB,
			   ElectronicConnection* connectionA, ElectronicConnection* connectionB)
{
  Wire* result = createWire(wireName, endNameA, endNameB);
  connect(connectionA->getName(), connectionA, result->getEndA());
  connect(connectionB->getName(), result->getEndB(), connectionB);

  return result;
}


//------------------ connention
ElectronicConnection* ElectronicFactory::createConnection(string objName, string connName)
{
  return new ElectronicConnection(objName, connName);
}

//------------------ connention point
ElectronicConnectionPoint* ElectronicFactory::createConnectionPoint(string nameString)
{
  return new ElectronicConnectionPoint(nameString);
}

ElectronicConnectionPoint* ElectronicFactory::connect(string pointName,
				   ElectronicConnection* connectionA,
				   ElectronicConnection* connectionB)
{
  ElectronicConnectionPoint* result = createConnectionPoint(pointName);
  addConnection(result, connectionA);
  addConnection(result, connectionB);
  return result;
}

ElectronicConnectionPoint* ElectronicFactory::addConnection(ElectronicConnectionPoint* point,
							    ElectronicConnection* connection)
{
  point->addConnection(connection);
  return point;
}



