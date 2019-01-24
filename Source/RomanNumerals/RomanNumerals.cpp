#include "RomanNumerals.h"
#include<iostream>
#include <vector>
#include <map>

using namespace std;

std::string RomanNumerals::Convert(int arabicNumber)
{
    std::string romanString;
    int unitPlace = arabicNumber % 10;

    if(unitPlace <= 3)
    {
	while(unitPlace--)
	{
	    romanString += "I";
	    arabicNumber--;
	}
    }

    return romanString;
}


