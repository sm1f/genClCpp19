// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __ELECTRONIC_CONNECTOR_H__
#define __ELECTRONIC_CONNECTOR_H__

#include "ElectronicThing.h"

class ElectronicConnector : public ElectronicThing
{
 public:
  ElectronicConnector(string nameString);
  virtual ~ElectronicConnector();

  
 private:
  typedef ElectronicThing __super;

};

#endif //  __ELECTRONIC_CONNECTOR_H__

