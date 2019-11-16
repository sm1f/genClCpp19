// CopyRight Stephen Morrisson 2019
// All rights reserved.

// replace CommandLine with class name

#include "CommandLine.h"


CommandLineAction::CommandLineAction() {}
CommandLineAction::~CommandLineAction() {}


CommandLine::CommandLine()
  : CppBase()
{
}

CommandLine::~CommandLine()
{
}

CommandLine* CommandLine::AddCommandWord(string name, CommandLineAction action)
{
  word2action[name] = action;
  return this;
}

bool CommandLine::parseLine(int argc, string argv[])
{
  return false;
}
