// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __CLASSIC_STATE_MACHINETEST_H__
#define __CLASSIC_STATE_MACHINETEST_H__

#include "CommonTests.h"

class ClassicStateMachineTest : public CommonTests
{
 public:
  ClassicStateMachineTest();
  virtual ~ClassicStateMachineTest() {}
  virtual bool runTests(int level);
  virtual int runApp(int argc, const char** argv);
  
 private:
  typedef CommonTests __super;
};

#endif //  __CLASSIC_STATE_MACHINETEST_H__

