// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace CommandLineTests with class name

#ifndef  __CommandLineTests_H__
#define __CommandLineTests_H__

#include "CommonTests.h"
#include "CommandLine.h"

typedef std::map<string,bool> TestActions;
typedef TestActions TestActionsPtr;

class CommandLineTestAction : CommandLineAction
{
 public:
  CommandLineTestAction(TestActionsPtr test);
};

class CommandLineTests : public CommonTests
{
 public:
  CommandLineTests();
  virtual ~CommandLineTests() {}
  virtual bool runTests(int level);

  virtual bool CheckAllFalseSans();
 private:
  TestActions* actions;
  
};

#endif //  __CommandLineTests_H__

