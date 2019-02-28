#include "TestConstExpr.h"
#include <iostream>

namespace
{
    constexpr const char TIME_FORMAT[] = "yyyy-MM-dd hh:mm:ss";
}

int TestConstExpr::TestClass::SomeFunction()
{
   return 0;
}

#if 0
constexpr const char* TestConstExpr::TestClass::GetTimeFormat()
{
   return TIME_FORMAT;
}

constexpr int TestConstExpr::TestClass::GetTimeFormatSize()
{
//   return sizeof(TIME_FORMAT);
   return 25;
}
#endif
