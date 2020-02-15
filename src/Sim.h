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
  virtual bool appConfig(int argc, string* argv);
 private:
  typedef App __super;
};

#endif //  __SIM_H__

