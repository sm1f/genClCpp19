// CopyRight Stephen Morrisson 2017
// All rights reserved.


#include "common.h"
#include "App.h"
#include "CommandLine.h"


int main(int argc, const char** argv)
{
  cout << "genApp V0.0" << endl;

  App* theApp = new App();
  
  int result = theApp->runApp(argc, argv);

  if (result != 0)
    {
      cout << endl << "returned: " << result << endl;
    }

  return result;
}
