// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __CONNECTOR_H__
#define __CONNECTOR_H__

#include "ElectronicThing.h"

class Connector : public ElectronicThing
{
 public:
  Connector(string nameString);
  virtual ~Connector();

  
 private:
  typedef ElectronicThing __super;

};

#endif //  __CONNECTOR_H__

