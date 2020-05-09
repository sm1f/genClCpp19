// CopyRight Stephen Morrisson 2019
// All rights reserved.

// replace CppBase with class name

#include "CppBase.h"
#include "Walker.h"

CppBase* CppBase::walk(Walker* walker, CppBase* that, CppBase* other)
{
  NYI("");
  return that;
}

void CppBase::nyi(string file, string fn, int line, string text)
{
  cout << "NYI " << file << " " << fn << ":" << line << " " << text << endl;
}

void CppBase::nfi(string file, string fn, int line, string text)
{
  cout << "NFI " << file << " " << fn << " " << line << " " << text << endl;
}


