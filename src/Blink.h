// CopyRight Stephen Morrisson 2020
// All rights reserved.

// removed first lines
// replace Blink with class name
// replace Story with parent class name

// CopyRight Stephen Morrisson 2019
// All rights reserved.


#ifndef  __BLINK_H__
#define __BLINK_H__

#include "Story.h"

class Blink : public Story
{
 public:
  Blink();
  virtual ~Blink();
 private:
  typedef Story __super;

};

#endif //  __BLINK_H__

