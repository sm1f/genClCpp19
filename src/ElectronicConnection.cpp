// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "ElectronicConnection.h"

ElectronicConnection::ElectronicConnection(string baseString, string endString)
  : __super(makeName(baseString, endString))
{
}

ElectronicConnection::~ElectronicConnection()
{
}

string ElectronicConnection::makeName(string baseString, string endString)
{
  string result;
  result.append(baseString);
  result.append(".");
  result.append(endString);
  return result;
}
	    
// --------------------------- Electronic Connection point

ElectronicConnectionPoint::ElectronicConnectionPoint(string nameString)
  : __super(nameString)
{
}

ElectronicConnectionPoint::~ElectronicConnectionPoint()
{
}

ElectronicConnectionPoint* ElectronicConnectionPoint::addConnection(ElectronicConnection* that)
{
  connections.push_back(that);
  return this;
}


