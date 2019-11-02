// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace CommandLineTests with class name

#ifndef  __CommandLineTests_H__
#define __CommandLineTests_H__

#include "CommonTests.h"


class CommandLineTests : public CommonTests
{
 public:
  CommandLineTests() {}
  virtual ~CommandLineTests() {}
  virtual bool runTests(int level) { return false; } // NYI

 private:
  typedef CppBase __super;

};

#endif //  __CommandLineTests_H__

