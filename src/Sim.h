// CopyRight Stephen Morrisson 2019
// All rights reserved.

#ifndef  __SIM1_H__
#define __SIM1_H__

#include "App.h"

class Sim : public App
{
 public:
  Sim();
  virtual ~Sim();

  virtual bool setup(int argc, const char** argv);
};

#endif //  __SIM1_H__

