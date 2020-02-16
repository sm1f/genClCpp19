// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __POWER_SUPPLY_5V_H__
#define __POWER_SUPPLY_5V_H__

#include "Thing.h"

class PowerSupply5v : public Thing
{
 public:
  PowerSupply5v(string nameString);
  virtual ~PowerSupply5v();

  
 private:
  typedef Thing __super;

};

#endif //  __POWER_SUPPLY_5V_H__

