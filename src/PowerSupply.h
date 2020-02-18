// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __POWER_SUPPLY_H__
#define __POWER_SUPPLY_H__

#include "ElectronicThing.h"
#include "ElectronicConnection.h"

class PowerSupply : public ElectronicThing
{
 public:
  PowerSupply(string nameString, ElectronicConnection* groundConn);
  virtual ~PowerSupply() {}

  virtual ElectronicConnection* get5v();
  virtual ElectronicConnection* getGround();

 protected:
  ElectronicConnection* ground;
  ElectronicConnection* power5v;
  
 private:
  typedef ElectronicThing __super;
};

#endif //  __POWER_SUPPLY_5V_H__

