// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "TimeSim.h"

TimeSim::TimeSim()
  : __super(),
    currentTime(0)
{
}

TimeSim::~TimeSim()
{
}

void TimeSim::reset(long newStartTime)
{
  currentTime = newStartTime;
}

template<class T>
void TimeSim::push(long nextTime, T* event)
{
  NYI("push");
}
