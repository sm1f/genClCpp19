// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "HwFactory.h"

//------------------ Hw factory


HwBoard::HwBoard()
  : CppBase()
{
}

HwBoard::~HwBoard()
{
}

//------------------ Hw Board

HwFactory::HwFactory()
  : CppBase()
{
}

HwFactory::~HwFactory()
{
}

TimeSim* HwFactory::CreateTimeSim()
{
  return new TimeSim();
}

HwBoard* HwFactory::CreateBoard()
{
  return new HwBoard();
}

