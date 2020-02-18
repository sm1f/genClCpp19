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

  virtual Led* createLed(string nameString);
  virtual PowerSupply5v* createPowerSupply5v(string nameString);
  virtual Wire* createWire(string wireName, string endNameA, string endNameB);

  virtual ElectronicConnectionPoint* connect(string nameString, ElectronicConnection* connectionA, ElectronicConnection* connectionB);
  virtual ElectronicConnectionPoint* createConnection(string nameString);
  virtual ElectronicConnectionPoint* addConnection(ElectronicConnectionPoint* point, ElectronicConnection* connection);
  
 private:
  typedef Factory __super;

};

#endif //  __ELECTRONICFACTORY_H__

