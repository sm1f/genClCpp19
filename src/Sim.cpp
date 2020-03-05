// CopyRight Stephen Morrisson 2019
// All rights reserved.


#include "Sim.h"

Sim::Sim()
  : App(), simStarted(false), simFinished(false), simPassed(false)
{
}

Sim::~Sim()
{
}

bool Sim::simStart()
{
  simStarted = true;
  return true;
}

bool Sim::appConfig(CommandLine* cLine)
{
  return __super::appConfig(cLine);
}

bool Sim::simSetResult(bool passed)
{
  simPassed = passed;
  return passed;
}

