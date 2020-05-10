// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __DODLE_H__
#define __DODLE_H__

#include "App.h"

class DodleMap : public CppBase
{
 public:
  DodleMap() {}
  virtual ~DodleMap() {}

  virtual void walkAttrs(Walker* walker, CppBase* other);
  static DodleMap* asAttr(Walker* walker, string attrName, DodleMap* that, DodleMap* other);
  virtual CppBase* walkAlloc(Walker* walker, CppBase* other);
  virtual CppBase* walkFinish(Walker* walker, CppBase* other);
  
 private:
  typedef CppBase __super;
};

class Dodle : public App
{
 public:
  Dodle();
  virtual ~Dodle() {}

  virtual void walkAttrs(Walker* walker, CppBase* other);
  virtual CppBase* walkAlloc(Walker* walker, CppBase* other);
  virtual CppBase* walkFinish(Walker* walker, CppBase* other);

  virtual bool appSetupCL(CommandLine* cLine);
  virtual bool appShowConfig();

 protected:
  DodleMap* m_map;
  
 private:
  typedef App __super;
};

#endif //  __DODLE_H__

