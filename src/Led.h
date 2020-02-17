// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __LED_H__
#define __LED_H__

#include "ElectronicThing.h"

class Led : public ElectronicThing
{
 public:
  Led(string nameString);
  virtual ~Led();
 private:
  typedef ElectronicThing __super;

};

#endif //  __LED_H__

