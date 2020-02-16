// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __THING_H__
#define __THING_H__

#include "CppBase.h"

class Thing : public CppBase
{
 public:
  static Thing* create(string nameString);
  virtual ~Thing();
 protected:
  Thing(string nameString);

  string name;
 private:
  typedef CppBase __super;

};

#endif //  __THING_H__

