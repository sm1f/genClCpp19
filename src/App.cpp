// CopyRight Stephen Morrisson 2020
// All rights reserved.

// replace App with class name

#include "App.h"

App::App()
  : CppBase(),
    cLine(new CommandLine())
{
}

App::~App()
{
}

int App::runApp(int argc, const char* argv[])
{
  string args[argc];
  
  for (int i = 0; i < argc; i++) {
    args[i] = string(argv[i]);
  }
  
  if (! appConfig(argc, args)) {
    cout << "appConfig failed" << endl;
    return -1;
  } else if (! appShowConfig()) {
    cout << "appShowConfig failed" << endl;
    return -2;
  } else if (! appSetup()) {
    cout << "appSetup failed" << endl;
    return -3;
  } else if (! appRun()) {
    cout << "appRun failed" << endl;
    return -4;
  } else if (! appResolveResult()) {
    cout << "appResolveResult failed" << endl;
    return -5;
  } else if (! appCleanup(false, false)) {
    cout << "appCleanup failed" << endl;
    return -6;
  }
      
  return 0;
}

bool App::appConfig(int argc, string* argv)
{
  return cLine->parseLine(argc, argv);
}


bool App::appShowConfig() { return true; }
bool App::appSetup() { return true; }
bool App::appRun() { return true; }
bool App::appResolveResult() { return true; }
bool App::appCleanup(bool followWithSameApp, bool followWithDiffApp) { return true; }

