// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __WIRE_H__
#define __WIRE_H__

#include "ElectronicThing.h"
#include "ElectronicConnection.h"

class Wire : public ElectronicThing
{
 public:
  Wire(string nameString, ElectronicConnection* connectionA, ElectronicConnection* connectionB);
  virtual ~Wire() {}

  virtual ElectronicConnection* getEndA();
  virtual ElectronicConnection* getEndB();
 protected:
  ElectronicConnection* endA;
  ElectronicConnection* endB;
  
  //  virtual Wire* addIn(Electron);
 private:
  typedef ElectronicThing __super;

};

#endif //  __WIRE_H__

