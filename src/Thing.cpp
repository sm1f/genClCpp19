// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "Thing.h"

Thing::Thing(string nameString)
  : CppBase(),
    name(nameString)
{
}

Thing::~Thing()
{
}

Thing* Thing::create(string nameString)
{
  return new Thing(nameString);
}

