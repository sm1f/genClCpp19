// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __ELECTRONIC_CONNECTION_H__
#define __ELECTRONIC_CONNECTION_H__

#include "ElectronicThing.h"

class ElectronicConnection : public ElectronicThing
{
 public:
  ElectronicConnection(string nameString);
  virtual ~ElectronicConnection();

  
 private:
  typedef ElectronicThing __super;

};

#endif //  __ELECTRONIC_CONNECTION_H__

