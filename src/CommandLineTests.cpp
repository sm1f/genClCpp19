
// CopyRight Stephen Morrisson 2019
// All rights reserved.

#include "CommandLineTests.h"

CommandLineTests::CommandLineTests()
  : actions(new TestActionCalls())
{
}

bool CommandLineTests::runTests(int level)
{
  bool result = true;
  if (level > -1) {
    clearResults();
    result &= testWords(0,0);
  }

  TV_B(result);
  return result;
}

void CommandLineTests::clearResults()
{
  actions->clear();
}

void CommandLineTests::addPossibleWords(int count)
{
  for (int i = 0; i < count; i++) {
    string word = random_string(5);
    NFI(" result" + word);
  }
}


bool CommandLineTests::testWords(int possibleWordCount, int lineWordCount)
{
  addPossibleWords(possibleWordCount);
  
  NYI("");
  return false;
}



