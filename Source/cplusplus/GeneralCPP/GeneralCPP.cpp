#include "GeneralCPP.h"
#include "TestConstExpr.h"
#include <iostream>

int GeneralCPP::FunctionWithStdOut()
{
   std::cout << "TestConstExpr::TIME_FORMAT:" << TestConstExpr::TIME_FORMAT << std::endl;
   std::cout << "TestConstExpr::TIME_FORMAT_SIZE:" << TestConstExpr::TIME_FORMAT_SIZE << std::endl;
   return 0;
}

int GeneralCPP::FunctionWithStdErr()
{
   return 0;
}

std::vector<int> GeneralCPP::ReturnVector()
{
   //Its possible to return a vector in this format.
   return {1,2,3};
}
