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

SetStringVarCommandLineAction::SetStringVarCommandLineAction(string argString, string& varToSet)
  : word(argString), var(varToSet)
{
}

CommandLine::CommandLine()
  : CppBase()
{
}

CommandLine::~CommandLine()
{
}

CommandLine* CommandLine::addCommandWord(string name, CommandLineActionPtr action)
{
  word2action[name] = action;
  return this;
}

bool CommandLine::addArgs(int argc, const char** argv)
{
  for (int i = 0; i < argc; i++)
    {
      string arg = argv[i];
      args.push_back(arg);
    }
  
  return true;
}

bool CommandLine::parseLine()
{
  int argc = args.size();
  int argIndex = 0;

  TV_V(argc);
  for (int argIndex = 0; argIndex < argc; argIndex++)
    {
      string arg = args[argIndex];
      TV_V(arg);

      if (string_startsWith(arg, doubleDash)) {
	NYI("double dash");
      } else if (string_startsWith(arg, doubleDash)) {
	NYI("double dash");
      } else {
	NYI("word");
      }
      NFI("");
    }
  return true;
}


