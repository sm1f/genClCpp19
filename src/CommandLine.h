// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace Zz with class name

#ifndef  __CommandLine_H__
#define __CommandLine_H__

#include <map>

#include "common.h"
#include "CppBase.h"


class CommandAction : public CppBase
{
 public:
  CommandAction();
  virtual ~CommandAction();
  virtual bool doAction();
};

class CommandLine : public CppBase
{
 public:
  CommandLine();
  virtual ~CommandLine();

  virtual CommandLine* AddCommandWord(string name, CommandAction action);
 protected:
  map<string,CommandAction> word2action;
};

#endif //  __CommandLine_H__

