// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __HW_DESIGN_H__
#define __HW_DESIGN_H__

#include "CppBase.h"

class HwDesign : public CppBase
{
 public:
  HwDesign();
  virtual ~HwDesign() {}
 private:
  typedef CppBase __super;
};

class HwDesignDictionary : public CppBase
{
 public:
  HwDesignDictionary();
  virtual ~HwDesignDictionary() {}

  //  virtual void AddHwDesigns();
 private:
  typedef CppBase __super;
};

#endif //  __HW_DESIGN_H__

