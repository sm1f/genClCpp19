// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __LED_H__
#define __LED_H__

#include "ElectronicThing.h"
#include "ElectronicConnection.h"

class Led : public ElectronicThing
{
 public:
  Led(string ledName, ElectronicConnection* powerConn, ElectronicConnection* groundConn);
  virtual ~Led() {}

  virtual ElectronicConnection* powerIn();
  virtual ElectronicConnection* groundOut();
  
 protected:
  ElectronicConnection* fromPower;
  ElectronicConnection* toGround;
  
 private:
  typedef ElectronicThing __super;

};

#endif //  __LED_H__

