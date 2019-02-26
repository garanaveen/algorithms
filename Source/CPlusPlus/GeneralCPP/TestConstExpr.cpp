#include "TestConstExpr.h"
#include <iostream>


int TestConstExpr::TestClass::SomeFunction()
{
   std::cout << "TIME_FORMAT : " << TestConstExpr::TIME_FORMAT << std::endl;
   std::cout << "TIME_FORMAT_SIZE : " << TestConstExpr::TIME_FORMAT_SIZE << std::endl;
   return 0;
}
