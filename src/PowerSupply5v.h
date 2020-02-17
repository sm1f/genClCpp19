// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __POWER_SUPPLY_5V_H__
#define __POWER_SUPPLY_5V_H__

#include "ElectronicThing.h"

class PowerSupply5v : public ElectronicThing
{
 public:
  PowerSupply5v(string nameString);
  virtual ~PowerSupply5v();

  
 private:
  typedef ElectronicThing __super;

};

#endif //  __POWER_SUPPLY_5V_H__

