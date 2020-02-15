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

 virtual int runApp(int argc, const char* argv[]);
 virtual bool appConfig(int argc, string args[]);
 virtual bool appShowConfig();
 virtual bool appSetup();
 virtual bool appRun();
 virtual bool appResolveResult();
 virtual bool appCleanup(bool followWithSameApp, bool followWithDiffApp);

 protected:
 CommandLine* cLine;
 
 private:
  typedef CppBase __super;

};

#endif //  __App_H__

