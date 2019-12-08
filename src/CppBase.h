// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace Zz with class name

#ifndef  __CppBase_H__
#define __CppBase_H__

#include "common.h"

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

#define TV_S(VAR, VAL)							\
  { std::cout << "TV " << __FILE__ << ":" << __LINE__ << " " # VAR << VAL << std::endl;}
     
#define TV_B(VAR) \
  { std::cout << "TV " << __FILE__ << ":" << __LINE__ << " " # VAR << (VAR ? ": true" : ": false") << std::endl;}



class CppBase
{
 public:
  CppBase();
  virtual ~CppBase();

  virtual void nyi(string file, string fn, int line, string text);
  virtual void nfi(string file, string fn, int line, string text);
};

#endif //  __CppBase_H__

