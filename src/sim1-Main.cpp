// CopyRight Stephen Morrisson 2019
// All rights reserved.


#include "common.h"
#include "Sim1.h"




int main(int argc, const char** argv)
{
  cout << __FILE__ << " V0.0" << endl;

  Sim1* sim = new Sim1();
  if (! sim->setup(argc, argv)) {
      cout << "Sim1.setup failed" << endl;
  } else {
      SNFI("");
  }
  
  /*
  CommandLineTests* clTests = new CommandLineTests();
  
  bool result = clTests->runTests(0);

  cout << "Command Line tests " << (result ? "passed" : "failed") << endl;

  return (result ? 0 : -1);
  */
  return -1;
}
