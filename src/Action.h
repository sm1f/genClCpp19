// CopyRight Stephen Morrisson 2019
// All rights reserved.

// intended to copy and replace Action with class name

#ifndef  __Action_H__
#define __Action_H__

#include "common.h"
#include "CppBase.h"


class Action : public CppBase
{
 public:
  Action();
  virtual ~Action();
  virtual bool apply();
 private:
  typedef CppBase __super;

};

#endif //  __Action_H__

