// CopyRight Stephen Morrisson 2019
// All rights reserved.

// replace CppBase with class name

#include "CppBase.h"

CppBase::CppBase()
{
}

CppBase::~CppBase()
{
}

void CppBase::nyi(string file, string fn, int line, string text)
{
  cout << "NYI " << file << " " << fn << " " << line << " " << text << endl;
}


