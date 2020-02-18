// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __ELECTRONIC_CONNECTION_H__
#define __ELECTRONIC_CONNECTION_H__

#include "Thing.h"

class ElectronicConnection : public Thing
{
 public:
  ElectronicConnection(string baseString, string endString);
  virtual ~ElectronicConnection();

  static string makeName(string baseString, string endString);
  
 private:
  typedef Thing __super;
};

class ElectronicConnectionPoint : public Thing
{
 public:
  ElectronicConnectionPoint(string nameString);
  virtual ~ElectronicConnectionPoint();

  virtual ElectronicConnectionPoint* addConnection(ElectronicConnection* that);
 protected:
  vector<ElectronicConnection*> connections;

 private:
  typedef Thing __super;
};


#endif //  __ELECTRONIC_CONNECTION_H__

