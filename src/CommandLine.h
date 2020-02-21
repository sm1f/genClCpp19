// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace Zz with class name

#ifndef  __CommandLine_H__
#define __CommandLine_H__

#include "common.h"
#include "CppBase.h"
#include "Action.h"


class CommandLineAction : public Action
{
 public:
  static CommandLineAction createCommandLineAction();
  virtual ~CommandLineAction();
  virtual bool apply(string arg);
 protected:
  CommandLineAction();
};
typedef CommandLineAction* CommandLineActionPtr;

class UnImplCommandLineAction : public CommandLineAction {
 public:
  static UnImplCommandLineAction* Create(string argString);
 protected:
  UnImplCommandLineAction(string argString);
 private:
  typedef CommandLineAction __super;

 protected:
  string arg;
};

class CommandLine : public CppBase
{
 public:
  CommandLine();
  virtual ~CommandLine();

  virtual CommandLine* addCommandWord(string name, CommandLineActionPtr action);

  virtual bool addArgs(int argc, const char** argv);
  virtual bool parseLine();

 protected:
  map<string,CommandLineActionPtr> word2action;
  Strings args;
  const string doubleDash = "--";
  const string SingleDash = "-";
};

#endif //  __CommandLine_H__

