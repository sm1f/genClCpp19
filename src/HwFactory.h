// CopyRight Stephen Morrisson 2020
// All rights reserved.



#ifndef  __HwFactory_H__
#define __HwFactory_H__

#include "CppBase.h"
#include "TimeSim.h"

class HwBoard : public CppBase
{
 public:
  HwBoard();
  virtual ~HwBoard();
 private:
  typedef CppBase __super;  
};


class HwFactory : public CppBase
{
 public:
  HwFactory();
  virtual ~HwFactory();

  virtual TimeSim* CreateTimeSim();
  virtual HwBoard* CreateBoard();
 private:
  typedef CppBase __super;
};

#endif //  __HwFactory_H__

