// CopyRight Stephen Morrisson 2019
// All rights reserved.


#include "common.h"
#include "Sim1.h"




int main(int argc, const char** argv)
{
  cout << __FILE__ << " V0.0" << endl;

  Sim1* sim = new Sim1();
  if (! sim->runApp(argc, argv)) {
      cout << "Sim runAppp failed" << endl;
  } else {
    return 0;
  }
  
  return -1;
}
