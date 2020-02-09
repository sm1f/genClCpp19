// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __HW_SIM_V1_H__
#define __HW_SIM_V1_H__

#include "Sim.h"

class HwSimV1 : public Sim
{
 public:
  HwSimV1();
  virtual ~HwSimV1();

  virtual bool setup(int argc, const char** argv);

  virtual bool blink();
};

#endif //  __HW_SIM_V1_H__

