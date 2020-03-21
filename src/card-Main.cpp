// CopyRight Stephen Morrisson 2019
// All rights reserved.

#include <iostream>
#include <fstream>

#include "common.h"

class GameCard {
public:
  GameCard() {}
  virtual ~GameCard() {}
};

class GameCards {
public:
  GameCards() {}
  virtual ~GameCards() {}

  virtual void writeFile(ofstream& outStream);
};

void GameCards::writeFile(ofstream& outStream)
{
   outStream << "test3" << endl;
}

int main(int argc, const char** argv)
{
  cout << __FILE__ << " Game Card V0.0" << endl;
  GameCards cards;

  ofstream cardsStream;
  cardsStream.open("genData/foo.ps");

  cards.writeFile(cardsStream);

  cardsStream.close();
  
  return -0;
}


