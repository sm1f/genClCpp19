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

bool Sim::appConfig(CommandLine* cLine)
{
  return __super::appConfig(cLine);
}

