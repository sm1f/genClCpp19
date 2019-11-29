// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace CommandLineTests with class name

#ifndef  __CommandLineTests_H__
#define __CommandLineTests_H__

#include "CommonTests.h"
#include "CommandLine.h"


class CommandLineTests : public CommonTests
{
 public:
  CommandLineTests();
  virtual ~CommandLineTests() {}
  virtual bool runTests(int level);
};

#endif //  __CommandLineTests_H__

