// CopyRight Stephen Morrisson 2020
// All rights reserved.

// replace App with class name

#include "App.h"

App::App()
  : CppBase()
{
}

App::~App()
{
}

int App::runMain(int argc, const char** argv)
{
  if (! setup(argc, argv)) {
    return -1;
  } else {
    NFI("");
  }
      
  return 0;
}

bool App::setup(int argc, const char** argv)
{
  return true;
}
   


