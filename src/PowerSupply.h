// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __POWER_SUPPLY_H__
#define __POWER_SUPPLY_H__

#include "ElectronicThing.h"

class PowerSupply : public ElectronicThing
{
 public:
  PowerSupply(string nameString);
  virtual ~PowerSupply();

  
 private:
  typedef ElectronicThing __super;

};

#endif //  __POWER_SUPPLY_5V_H__

