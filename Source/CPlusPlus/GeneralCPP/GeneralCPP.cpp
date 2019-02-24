
#include "GeneralCPP.h"
#include <iostream>

int GeneralCPP::FunctionWithStdOut()
{
   std::cout << "GeneralCPP::FunctionWithStdOut()" << std::endl;
   return 0;
}

int GeneralCPP::FunctionWithStdErr()
{
   std::cerr << "GeneralCPP::FunctionWithStdErr()" << std::endl;
   return 0;
}
