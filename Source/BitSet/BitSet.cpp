#include "BitSet.h"
#include<iostream>
#include <vector>
#include <map>

unsigned int BitSet::GenerateUniqueNumbers(unsigned int N, unsigned int S, unsigned int P, unsigned int Q)
{
    unsigned previousValue = S & 0x7FFFFFFF;
    unsigned currentValue;
    int i = 1;
    for (; i < N ; i++){
        currentValue = (previousValue*P+Q) & 0x7FFFFFFF;
        //std::cout << currentValue << std::endl;
        if(currentValue == previousValue)
        {
            break;
        }
        previousValue = currentValue;
    }
    return i;
}
