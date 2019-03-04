#pragma once

#include <string.h>

//See if its ok to have constexpr const char* in headerfile.
//https://stackoverflow.com/questions/54891550/constexpr-const-char-in-header-file

namespace TestConstExpr
{
    constexpr const char* TIME_FORMAT = "yyyy-MM-dd hh:mm:ss"; //This throws multiple definitions error
    //static constexpr auto& TIME_FORMAT = "yyyy-MM-dd hh:mm:ss:nnn";
    constexpr const int TIME_FORMAT_SIZE = sizeof(TIME_FORMAT);

    class TestClass
    {
	public:
	    int SomeFunction();
	private:
//	    constexpr const char* GetTimeFormat();
//	    static constexpr int GetTimeFormatSize();
	    char arr[TIME_FORMAT_SIZE];
    };
}

