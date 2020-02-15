// CopyRight Stephen Morrisson 2019, 2020
// All rights reserved.

// removed first lines
// replace State with class name
// replace CppBase with parent class name

// CopyRight Stephen Morrisson 2019
// All rights reserved.


#ifndef  __STATE_H__
#define __STATE_H__

#include "CppBase.h"

class State : public CppBase
{
 public:
  State();
  virtual ~State();
 private:
  typedef CppBase __super;

};

class StateMachineState : public State
{
 public:
  StateMachineState();
  virtual ~StateMachineState();
 private:
  typedef State __super;

};

#endif //  __STATE_H__

