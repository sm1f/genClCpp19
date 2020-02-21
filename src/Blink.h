// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __BLINK_H__
#define __BLINK_H__

#include "Story.h"
#include "ElectronicFactory.h"

class Blink : public Story
{
 public:
  Blink();
  virtual ~Blink();
  virtual bool applyBlink(ElectronicFactory* factory, TimeSim* timeSim);
  
 private:
  typedef Story __super;

};

#endif //  __BLINK_H__

