// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __POWER_SUPPLY_5V_H__
#define __POWER_SUPPLY_5V_H__

#include "PowerSupply.h"
#include "ElectronicConnection.h"

class PowerSupply5v : public PowerSupply
{
 public:
  PowerSupply5v(string nameString,
		ElectronicConnection* ground,
		ElectronicConnection* power5v);
  virtual ~PowerSupply5v() {}

 private:
  typedef PowerSupply __super;

};

#endif //  __POWER_SUPPLY_5V_H__

