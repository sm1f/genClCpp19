// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __HW_SIM_V1_H__
#define __HW_SIM_V1_H__

#include "Sim.h"
#include "HwFactory.h"
#include "TimeSim.h"

class HwSimV1 : public Sim
{
 public:
  HwSimV1();
  virtual ~HwSimV1();

  virtual bool appConig(int argc, string* argv);
  virtual bool appShowConfig();
  virtual bool appRun();

  virtual bool blink(HwFactory* factory, TimeSim* timeSim);
};

#endif //  __HW_SIM_V1_H__

