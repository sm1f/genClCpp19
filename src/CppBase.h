// CopyRight Stephen Morrisson 2019, 2020
// All rights reserved.




#ifndef  __CppBase_H__
#define __CppBase_H__

#include "common.h"

class Walker;

//  --------- validate macros
#define V_true(EXP) \
  { if (! (EXP)) { cerr << "Validate_true failed for exp: " # EXP << endl; } }

#define V_NotNull(EXP) \
  { if (NULL == EXP) { cerr << "Validate_notNull failed for exp: " # EXP << endl; } }

// todo: add comments

#define NYI(TEXT)                                      \
  {                                                    \
    this->nyi(__FILE__, __FUNCTION__, __LINE__, TEXT); \
  }

#define NFI(TEXT)                                      \
  {                                                    \
    this->nfi(__FILE__, __FUNCTION__, __LINE__, TEXT); \
  }

#define SNYI(TEXT) \
  { std::cout << "NYI " << __FILE__ << ":" << __LINE__ << " " << __FUNCTION__ << " " << TEXT << std::endl; }

#define SNFI(TEXT) \
  { std::cout << "NFI " << __FILE__ << ":" << __LINE__ << " " << __FUNCTION__ << " " << TEXT << std::endl; }

// ------------- trace verbose

#define TV()							\
  { std::cout << "TV " << __FILE__ << ":" << __LINE__ << std::endl;}

#define TV_B(VAR) \
  { std::cout << "TV " << __FILE__ << ":" << __LINE__ << " " # VAR << (VAR ? ": true" : ": false") << std::endl;}

#define TV_V(VAR)							\
  { std::cout << "TV " << __FILE__ << ":" << __LINE__ << " " # VAR << ": " << VAR << std::endl;}

// ------------- conditional trace verbose

//  if false then print stuff.
#define CTV_false(VAR) \
  { if (! VAR) { \
    std::cout << "TV " << __FILE__ << ":" << __LINE__ << " " # VAR << (VAR ? ": true" : ": false") << std::endl; } \
  }

template<typename T>
const char* getClassName(T) {
  return typeid(T).name();
}

class CppBase;

class CppBase
{
 public:
  CppBase() {}
  virtual ~CppBase() {}

  virtual CppBase* walk(Walker* walker, CppBase* other);
  virtual void walkAttrs(Walker* walker, CppBase* other);
  virtual CppBase* walkAlloc(Walker* walker, CppBase* other);
  virtual CppBase* walkFinish(Walker* walker, CppBase* other);
  
  virtual void nyi(string file, string fn, int line, string text);
  virtual void nfi(string file, string fn, int line, string text);
};



#endif //  __CppBase_H__

