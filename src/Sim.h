// CopyRight Stephen Morrisson 2019
// All rights reserved.

#ifndef  __SIM_H__
#define __SIM_H__

#include "App.h"

class Sim : public App
{
 public:
  Sim();
  virtual ~Sim();
  virtual bool appConfig(int argc, const char** argv);
};

#endif //  __SIM_H__

