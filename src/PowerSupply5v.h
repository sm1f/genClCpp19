// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __POWER_SUPPLY_5V_H__
#define __POWER_SUPPLY_5V_H__

#include "PowerSupply.h"

class PowerSupply5v : public PowerSupply
{
 public:
  PowerSupply5v(string nameString);
  virtual ~PowerSupply5v();

  
 private:
  typedef PowerSupply __super;

};

#endif //  __POWER_SUPPLY_5V_H__

