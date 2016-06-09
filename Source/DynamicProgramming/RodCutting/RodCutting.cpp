#include "RodCutting.h"
#include <string>
#include <iostream>

using namespace std;

//R10 = MAX[P10, R1+P9, R2+P8, R3+P7, R4+P6, R5+P5, R6+P4, R7+P3, R8+P2, R9+P1]
//R9 = MAX[P9, R1+P8, R2+P7, R3+P6, R4+P5, R5+P4, R6+P3, R7+P2, R8+P1]
//R3 = MAX[P3, R1+P2, R2+P1]

int RodCutting::FirstCut(int rodSize)
{
    //rodSize = 5
    //Posibilities - MAX[(0,5) (1,4) (2,3) (3,2) (4,1)]
    int maxPrice = 0;
//    for(int i = rodSize; i > 0; i--)
//    {
//        maxPrice = std::max(Cut(i)+Cut(rodSize-i), maxPrice);
//    }
    return rodSize;
}

void RodCutting::SetPriceTable(const vector<pair<RodLength, RodPrice> >& priceTable)
{
    vector<pair<int, int> >::const_iterator it = priceTable.begin();
    for(; it != priceTable.end(); it++){
        PriceTable[(*it).first] = (*it).second;
    }
}

