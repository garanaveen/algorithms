#pragma once

#include <string.h>

//See if its ok to have constexpr const char* in headerfile.
//https://stackoverflow.com/questions/54891550/constexpr-const-char-in-header-file

namespace TestConstExpr
{
    constexpr const char* TIME_FORMAT = "yyyy-MM-dd hh:mm:ss";
    constexpr const int TIME_FORMAT_SIZE = strlen(TIME_FORMAT) + 1;

    class TestClass
    {
	public:
	    int SomeFunction();
	private:
	    char arr[TIME_FORMAT_SIZE];
    };
}
