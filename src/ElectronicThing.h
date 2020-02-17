// CopyRight Stephen Morrisson 2020
// All rights reserved.


#ifndef  __ELECTRONIC_THING_H__
#define __ELECTRONIC_THING_H__

#include "Thing.h"

//class electronicFactory;

class ElectronicThing : public Thing
{
 public:
  ElectronicThing(string nameString);
  virtual ~ElectronicThing();

  // protected:
  //  ElectronicFactory* factory;
 private:
  typedef Thing __super;

};

#endif //  __ELECTRONIC_THING_H__

