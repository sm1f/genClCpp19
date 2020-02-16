// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __LED_H__
#define __LED_H__

#include "Thing.h"

class Led : public Thing
{
 public:
  Led(string nameString);
  virtual ~Led();
 private:
  typedef Thing __super;

};

#endif //  __LED_H__

