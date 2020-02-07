// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace App with class name

#ifndef  __App_H__
#define __App_H__

#include "CppBase.h"
#include "CommandLine.h"

class App : public CppBase
{
 public:
  App();
  virtual ~App();

 virtual int runMain(int argc, const char** argv);
 private:
  typedef CppBase __super;

};

#endif //  __App_H__

