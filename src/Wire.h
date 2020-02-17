// CopyRight Stephen Morrisson 2020
// All rights reserved.

// removed first lines
// replace Wire with class name
// replace ElectronicThing with parent class name

// CopyRight Stephen Morrisson 2019
// All rights reserved.


#ifndef  __WIRE_H__
#define __WIRE_H__

#include "ElectronicThing.h"

class Wire : public ElectronicThing
{
 public:
  Wire(string nameString);
  virtual ~Wire();

  //  virtual Wire* addIn(Electron);
 private:
  typedef ElectronicThing __super;

};

#endif //  __WIRE_H__

