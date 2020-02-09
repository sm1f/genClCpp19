// CopyRight Stephen Morrisson 2020
// All rights reserved.


#include "HwSimV1.h"


int main(int argc, const char** argv)
{
  cout << "hwSim V1" << endl;

  HwSimV1* theApp = new HwSimV1();
  
  int result = theApp->runApp(argc, argv);

  if (result != 0)
    {
      cout << endl << "returned: " << result << endl;
    }

  return result;
}
