// CopyRight Stephen Morrisson 2020
// All rights reserved.

#ifndef  __CONNECTOR_H__
#define __CONNECTOR_H__

#include "Thing.h"

class Connector : public Thing
{
 public:
  Connector(string nameString);
  virtual ~Connector();

  
 private:
  typedef Thing __super;

};

#endif //  __CONNECTOR_H__

