
#include "GeneralCPP.h"
#include "TestConstExpr.h"
#include <iostream>

int GeneralCPP::FunctionWithStdOut()
{
   std::cout << "TIME_FORMAT : " << TestConstExpr::TIME_FORMAT << std::endl;
   return 0;
}

int GeneralCPP::FunctionWithStdErr()
{
   return 0;
}
