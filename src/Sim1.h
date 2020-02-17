// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __SIM1_H__
#define __SIM1_H__

#include "Sim.h"

class Sim1 : public Sim
{
 public:
  Sim1();
  virtual ~Sim1();

  virtual bool appConfig(CommandLine* cLine);
};

#endif //  __SIM1_H__

