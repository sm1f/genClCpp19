// CopyRight Stephen Morrisson 2019
// All rights reserved.

// replace CommandLine with class name

#include "CommandLine.h"


CommandAction::CommandAction() {}
CommandAction::~CommandAction() {}
bool CommandAction::doAction() { return true; }


CommandLine::CommandLine()
  : CppBase()
{
}

CommandLine::~CommandLine()
{
}

CommandLine* CommandLine::AddCommandWord(string name, CommandAction action)
{
  word2action[name] = action;
  return this;
}


