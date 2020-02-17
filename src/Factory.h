// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __FACTORY_H__
#define __FACTORY_H__

#include "CppBase.h"
#include "TimeSim.h"

class Factory : public CppBase
{
 public:
  Factory();
  virtual ~Factory();

  virtual TimeSim* createTimeSim();

 private:
  typedef CppBase __super;

};

#endif //  __FACTORY_H__

