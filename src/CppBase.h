// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace Zz with class name

#ifndef  __CppBase_H__
#define __CppBase_H__

#include "common.h"

#define NYI(TEXT)                                      \
  {                                                    \
    this->nyi(__FILE__, __FUNCTION__, __LINE__, TEXT); \
  }

class CppBase
{
 public:
  CppBase();
  virtual ~CppBase();

  virtual void nyi(string file, string fn, int line, string text);
};

#endif //  __CppBase_H__

