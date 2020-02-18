// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "PowerSupply5v.h"

PowerSupply5v::PowerSupply5v(string nameString,
			     ElectronicConnection* groundConn,
			     ElectronicConnection* power5vConn)
  : __super(nameString, groundConn)
{
  power5v = power5vConn;
}



