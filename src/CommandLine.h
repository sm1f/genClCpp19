// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace Zz with class name

#ifndef  __CommandLine_H__
#define __CommandLine_H__

#include <map>

#include "common.h"
#include "CppBase.h"
#include "Action.h"


class CommandLineAction : public Action
{
 public:
  CommandLineAction();
  virtual ~CommandLineAction();
};

class CommandLine : public CppBase
{
 public:
  CommandLine();
  virtual ~CommandLine();

  virtual bool parseLine(int argc, string argv[]);
  virtual CommandLine* AddCommandWord(string name, CommandLineAction action);
 protected:
  map<string,CommandLineAction> word2action;
};

#endif //  __CommandLine_H__

