// CopyRight Stephen Morrisson 2019
// All rights reserved.

#ifndef  __SIM1_H__
#define __SIM1_H__

#include "Sim.h"

class Sim1 : public Sim
{
 public:
  Sim1();
  virtual ~Sim1();

  virtual bool setup(int argc, const char** argv);
};

#endif //  __SIM1_H__
