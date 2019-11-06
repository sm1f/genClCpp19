// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace CommonTests with class name

#ifndef  __CommonTests_H__
#define __CommonTests_H__

#include "common.h"
#include "CppBase.h"


class CommonTests : public CppBase
{
 public:
  CommonTests() {}
  virtual ~CommonTests() {}
  virtual bool runTests(int level) { NYI(""); return false; } // NYI
};

#endif //  __CommonTests_H__

