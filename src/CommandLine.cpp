// CopyRight Stephen Morrisson 2019
// All rights reserved.

// replace CommandLine with class name

#include "CommandLine.h"


CommandLineAction::CommandLineAction() {}
CommandLineAction::~CommandLineAction() {}
bool CommandLineAction::apply(string arg)
{
  return true;
}

UnImplCommandLineAction::UnImplCommandLineAction(string argString)
  : __super(), arg(argString)
{
}

UnImplCommandLineAction* UnImplCommandLineAction::Create(string argString)
{
  return new UnImplCommandLineAction(argString);
}

CommandLine::CommandLine()
  : CppBase()
{
}

CommandLine::~CommandLine()
{
}

CommandLine* CommandLine::AddCommandWord(string name, CommandLineActionPtr action)
{
  word2action[name] = action;
  return this;
}

bool CommandLine::parseLine(int argc, string* argv)
{
  return false;
}

bool CommandLine::parseRemaindingLine(int argc, string* argv, int nextPos)
{
  if (nextPos >= argc)
    {
      return true;
    }
  return parsePosition(argc, argv, nextPos, argv[nextPos]);
}

bool CommandLine::parsePosition(int argc, string* argv, int nextPos, string arg)
{
  string ds = "--";
  string ss = "-";
  if (ds.rfind(arg, 0) == 0) {
      NFI("double -- arg:" + arg);
  } else if (ss.rfind(arg, 0) == 0) {
      NFI("single - arg:" + arg);
  } else {
      NYI("word");
  }

  return false;
}
