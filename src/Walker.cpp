// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "Walker.h"

Walker::Walker()
  : CppBase()
{
}

CppBase* Walker::walk(string attrName, CppBase* subj, CppBase* other)
{
  return other;
}

DumpWalker::DumpWalker(string prefix)
  : m_prefix(prefix)
{
}

CppBase* DumpWalker::walk(string attrName, CppBase* subj, CppBase* other)
{
  //  if (attrName == NULL) { attrName = ""; }
  const char* name = getClassName(subj);
  cout << m_prefix << " class start: " << name << endl;

  //  subj->walkAttrs(this, other);
  NYI("");
  cout << m_prefix  << "class done:  " << name << endl;
  
  return other;
}



