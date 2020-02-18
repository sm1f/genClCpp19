// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __ELECTRONIC_CONNECTION_H__
#define __ELECTRONIC_CONNECTION_H__

#include "ElectronicThing.h"

class ElectronicConnection : public ElectronicThing
{
 public:
  ElectronicConnection(string baseString, string endString);
  virtual ~ElectronicConnection();

  static string makeName(string baseString, string endString);
  
 private:
  typedef ElectronicThing __super;
};

class ElectronicConnectionPoint : public ElectronicThing
{
 public:
  ElectronicConnectionPoint(string nameString);
  virtual ~ElectronicConnectionPoint();

  virtual ElectronicConnectionPoint* addConnection(ElectronicConnection* that);
 protected:
  vector<ElectronicConnection*> connections;

 private:
  typedef ElectronicThing __super;
};


#endif //  __ELECTRONIC_CONNECTION_H__
