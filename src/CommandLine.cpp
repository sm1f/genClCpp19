// CopyRight Stephen Morrisson 2019
// All rights reserved.

// replace CommandLine with class name

#include "CommandLine.h"

IMPL_MAP_GETVALUE(String2CommandLineAction, string, CommandLineActionPtr);


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

bool SetStringVarCommandLineAction::apply(string arg)
{
  var = arg;
  return true;
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
  arg2action[name] = action;
  return this;
}

bool CommandLine::addArgs(int argc, const char** argv)
{
  cout << "CommandLine:";
  for (int i = 0; i < argc; i++)
    {
      string arg = argv[i];
      args.push_back(arg);
      cout << " " << arg;
    }
  cout << endl;

  cout << "CommandLine argDefs: " << args.size() << endl;
  
  return true;
}

bool CommandLine::parseLine()
{
  bool result = true;
  int argc = args.size();
  int argIndex = 0;
  CommandLineActionPtr action = NULL;

  TV_V(argc);
  for (int argIndex = 0; argIndex < argc; argIndex++)
    {
      string arg = args[argIndex];
      TV_V(arg);

      if (string_startsWith(arg, doubleDash)) {
	NYI("double dash");
      } else if (string_startsWith(arg, doubleDash)) {
	NYI("double dash");
      } else if (String2CommandLineAction_tryGetValue(arg2action, arg, action)) {
	result &= action->apply(arg);
      } else {
	NFI("word");
      }
      NFI("");
    }
  return result;
}


