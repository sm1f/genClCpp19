// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "ClassicStateMachine.h"

ClassicStateMachineUtility::ClassicStateMachineUtility()
  : CppBase()
{
}

template<typename InputEnum, typename StateEnum, typename OutputEnum>
class ClassicStateMachineTransition {
 public:
  ClassicStateMachineTransition(StateEnum fromState, InputEnum inputValue, StateEnum toState, OutputEnum outputValue)
    : transFromState(fromState), transInputValue(inputValue), transToState(toState), transOutputValue(outputValue)
  {}
  
 private:
  StateEnum transFromState;
  InputEnum transInputValue;
  StateEnum transToState;
  OutputEnum transOutputValue;
};

template<typename InputEnum, typename StateEnum, typename OutputEnum>
class ClassicStateMachine {
 public:
  ClassicStateMachine() {}

  void AddTransition(StateEnum fromState, InputEnum inputValue, StateEnum toState, OutputEnum outputValue)
  {
  }
  
};

