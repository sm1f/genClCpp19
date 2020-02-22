// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __HW_SIM_V1_H__
#define __HW_SIM_V1_H__

#include "Sim.h"
#include "ElectronicFactory.h"
#include "TimeSim.h"

class HwSimV1 : public Sim
{
 public:
  HwSimV1();
  virtual ~HwSimV1();

  virtual bool appSetupCL(CommandLine* cLine);
  virtual bool appConfig(CommandLine* cLine);
  virtual bool appShowConfig();
  virtual bool appRun();

  virtual bool blink(ElectronicFactory* factory);

 protected:
  string hwDesignName;
  vector<ElectronicThing> parts;

 private:
  typedef Sim __super;
};

#endif //  __HW_SIM_V1_H__

