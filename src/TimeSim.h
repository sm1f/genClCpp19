// CopyRight Stephen Morrisson 2020
// All rights reserved.


/**
   Todo:  This is the simple version.  Expand later.
 */

#ifndef  __TIME_SIM_H__
#define __TIME_SIM_H__

#include "CppBase.h"

class TimeSim : public CppBase
{
 public:
  TimeSim();
  virtual ~TimeSim();

  virtual void reset(long startTime);

  template<class T>
    void push(long nextTime, T* event);
  
 private:
  long currentTime;
  
  typedef CppBase __super;

};

#endif //  __TIME_SIM_H__

