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

int App::runApp(int argc, const char** argv)
{
  if (! cLine->addArgs(argc, argv)) {
    cout << "cLine->addArgs failed" << endl;
    return -7;
  } else if (! appConfig(cLine)) {
    cout << "App->appConfig failed" << endl;
    return -1;
  } else if (! appShowConfig()) {
    cout << "App->appShowConfig failed" << endl;
    return -2;
  } else if (! appSetup()) {
    cout << "App->appSetup failed" << endl;
    return -3;
  } else if (! appRun()) {
    cout << "App->appRun failed" << endl;
    return -4;
  } else if (! appResolveResult()) {
    cout << "App->appResolveResult failed" << endl;
    return -5;
  } else if (! appCleanup(false, false)) {
    cout << "App->appCleanup failed" << endl;
    return -6;
  }
      
  return 0;
}

bool App::appConfig(CommandLine* cLine)
{
  return true;
}

bool App::appShowConfig() { return true; }
bool App::appSetup() { return true; }
bool App::appRun() { return true; }
bool App::appResolveResult() { return true; }
bool App::appCleanup(bool followWithSameApp, bool followWithDiffApp) { return true; }

