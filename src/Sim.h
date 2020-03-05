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
  virtual bool appConfig(CommandLine* cLine);
  virtual bool simStart();
  virtual bool simSetResult(bool passed);
 protected:
  bool simStarted;
  bool simFinished;
  bool simPassed;
 private:
  typedef App __super;
};

#endif //  __SIM_H__

