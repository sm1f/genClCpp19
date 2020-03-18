// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "ClassicStateMachine.h"
#include <map>

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

template<typename StateEnum, typename OutputEnum>
class ClassicStateMachineOutput {
 public:
  StateEnum transToState;
  OutputEnum transOutputValue;
};

template<typename KeyType, typename ValueType>
class MyMap
{
 public:
  typedef std::map<KeyType, ValueType> _BaseMapType;
  _BaseMapType baseMap;
  bool tryGetValue(KeyType key, ValueType& result2) {
    _BaseMapType::iterator it = baseMap.find(key);
    if (it == baseMap.end()) {
      return false;
    } else {
      result2 = it->second;
      return true;
    }
  }
};


template<typename InputEnum, typename StateEnum, typename OutputEnum>
class ClassicStateMachine {
 public:
  typedef ClassicStateMachineTransition<InputEnum, StateEnum, OutputEnum> _Transition;
  typedef ClassicStateMachineOutput<StateEnum, OutputEnum> _OutputPair;
  typedef map<InputEnum, _OutputPair> Input2OutMap;
  typedef map<StateEnum, Input2OutMap> State2TransMap;
  
 private:
  State2TransMap transitionMap;

  //  DECLARE_MAP_GETVALUE(State2TransMap, StateEnum, Input2OutMap);
  //  IMPL_MAP_GETVALUE(Input2OutMap, InputEnum, _OutputPair);
  //  IMPL_MAP_GETVALUE(State2TransMap, StateEnum, Input2OutMap);

 public:
  ClassicStateMachine() {}

  void foo() {}
  
  _Transition* addTransition(StateEnum fromState, InputEnum inputValue, StateEnum toState, OutputEnum outputValue)
  {
    //    if (transitionmap.try
    
    //_OutputPair outPair = _OutputPair(toState, outputValue);
    
    
    _Transition* result = new _Transition(fromState, inputValue, toState, outputValue);
    return result;
  };

};

enum class MyState { State1, State2, State3 };
enum class MyInput { In1, In2, In3 };
enum class MyOutput { Out1, Out2, Out3 };

class ClassicStateMachineTest : public ClassicStateMachine<MyInput, MyState, MyOutput>
{
 public:
  ClassicStateMachineTest() {}
  void bar() {}
};

ClassicStateMachineUtility::ClassicStateMachineUtility()
  : CppBase()
{
  ClassicStateMachineTest* machine = new ClassicStateMachineTest();
  //  machine->bar();
    machine->addTransition(MyState::State1, MyInput::In1, MyState::State2, MyOutput::Out1);
}

