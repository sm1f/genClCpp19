// Copyright Stephen Morrisson 2020
// All rights reserved.


#include "Dodle.h"
#include "Walker.h"

void DodleMap::walkAttrs(Walker* walker, CppBase* other) {}
DodleMap* DodleMap::asAttr(Walker* walker, string attrName, DodleMap* that, DodleMap* other) { return other; }
CppBase* DodleMap::walkAlloc(Walker* walker, CppBase* other) { return other; }
CppBase* DodleMap::walkFinish(Walker* walker, CppBase* other) { return other; }
  






Dodle::Dodle()
  : __super(), m_map(NULL)
{
}

void Dodle::walkAttrs(Walker* walker, CppBase* other)
{
  //  m_map = DodleMap::asAttr(walker, "m_map", m_map, other);
  NYI("m_map");
}

CppBase* Dodle::walkAlloc(Walker* walker, CppBase* other)
{
  NYI("");
  return other;
}

CppBase* Dodle::walkFinish(Walker* walker, CppBase* other)
{
  NYI("");
  return other;
}

bool Dodle::appSetupCL(CommandLine* cLine)
{
  NYI("");
  return true;
}

bool Dodle::appShowConfig()
{
  cout << "Dodle::appShowConfig()" << endl;
  
  Walker* walker = new DumpWalker("yyy");

  walker->walk("zzz", this, NULL);
  
  return true;
}


