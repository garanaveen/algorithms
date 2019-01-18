#include "roman.h"

Roman::Roman()
{
}

std::string Roman::ConvertToRoman(int num)
{
    // storing roman values of digits from 0-9
    // when placed at different places
    std::string m[] = {"","M", "MM", "MMM"};
    std::string c[] = {"", "C", "CC", "CCC", "CD", "D",
                     "DC", "DCC", "DCCC", "CM"};
    std::string x[] = {"", "X", "XX", "XXX", "XL", "L",
                     "LX", "LXX", "LXXX", "XC"};
    std::string i[] = {"", "I", "II", "III", "IV", "V",
                     "VI", "VII", "VIII", "IX"};

    std::string thousands = m[(num/1000)];
    std::string hundereds = c[(num%1000)/100];
    std::string tens =  x[(num%100)/10];
    std::string ones = i[num%10];

    std::string ans = thousands + hundereds + tens + ones;
    return ans;
}
