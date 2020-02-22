// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __HW_DESIGN_H__
#define __HW_DESIGN_H__

#include "CppBase.h"
#include "ElectronicFactory.h"

class HwDesign : public CppBase
{
 public:
  HwDesign();
  virtual ~HwDesign() {}

  virtual bool apply(ElectronicFactory* factory);
 private:
  typedef CppBase __super;
};

class LedTrivialDesign : public HwDesign
{
 public:
  LedTrivialDesign();
  virtual ~LedTrivialDesign() {}

  virtual bool apply(ElectronicFactory* factory);
 private:
  typedef HwDesign __super;
};

typedef map<string, HwDesign*> String2HwDesign;

class HwDesignDictionary : public CppBase
{
 public:
  HwDesignDictionary();
  virtual ~HwDesignDictionary() {}

  virtual bool applyDesign(string designName, ElectronicFactory* factory);

 private:
  String2HwDesign mapName2Design;
  
  typedef CppBase __super;
};

#endif //  __HW_DESIGN_H__

