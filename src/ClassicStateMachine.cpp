// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "ClassicStateMachine.h"

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

enum class MyState { State1, State2, State3 };
enum class MyInput { In1, In2, In3 };
enum class MyOutput { Out1, Out2, Out3 };

class ClassicStateMachineTest : ClassicStateMachine<MyInput, MyState, MyOutput>
{
  
};

ClassicStateMachineUtility::ClassicStateMachineUtility()
  : CppBase()
{
}

