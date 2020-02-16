// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __ELECTRONICFACTORY_H__
#define __ELECTRONICFACTORY_H__

#include "Factory.h"
#include "Led.h"
#include "PowerSupply5v.h"
#include "TimeSim.h"

class ElectronicFactory : public Factory
{
 public:
  ElectronicFactory();
  virtual ~ElectronicFactory();

  virtual TimeSim* CreateTimeSim();
  virtual Led* CreateLed(string nameString);
  virtual PowerSupply5v* CreatePowerSupply5V(string nameString);
 private:
  typedef Factory __super;

};

#endif //  __ELECTRONICFACTORY_H__

