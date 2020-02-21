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

  virtual bool Apply(ElectronicFactory* factory);
 private:
  typedef CppBase __super;
};

class LedTrivialDesign : public HwDesign
{
  LedTrivialDesign();
  virtual ~LedTrivialDesign() {}

  virtual bool Apply(ElectronicFactory* factory);
 private:
  typedef HwDesign __super;
};

class HwDesignDictionary : public CppBase
{
 public:
  HwDesignDictionary();
  virtual ~HwDesignDictionary() {}

  virtual bool applyDesign(string designName, ElectronicFactory* factory, vector<ElectronicThing> parts);

 private:
  map<string, HwDesign> mapName2Design;
  
  typedef CppBase __super;
};

#endif //  __HW_DESIGN_H__

