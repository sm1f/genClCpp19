// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __ELECTRONICFACTORY_H__
#define __ELECTRONICFACTORY_H__

#include "Factory.h"
#include "Led.h"
#include "PowerSupply5v.h"
#include "Wire.h"

class ElectronicFactory : public Factory
{
 public:
  ElectronicFactory();
  virtual ~ElectronicFactory();

  virtual Led* createLed(string ledName);
  virtual PowerSupply5v* createPowerSupply5v(string supplyName);
  virtual Wire* createWire(string wireName, string endNameA, string endNameB);
  virtual Wire* createWireConnection(string wireName, string endNameA, string endNameB,
			   ElectronicConnection* connectionA, ElectronicConnection* connectionB);

  virtual ElectronicConnection* createConnection(string objName, string connName);
  
  virtual ElectronicConnectionPoint* createConnectionPoint(string pointName);
  virtual ElectronicConnectionPoint* connect(string pointName, ElectronicConnection* connectionA, ElectronicConnection* connectionB);
  virtual ElectronicConnectionPoint* addConnection(ElectronicConnectionPoint* point, ElectronicConnection* connection);
  
 private:
  typedef Factory __super;

};

#endif //  __ELECTRONICFACTORY_H__

