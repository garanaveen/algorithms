
#include "MaxSubArray.h"
#include <limits.h>

//100000000 569099406 1607140150 823906344
//31
//https://www.hackerrank.com/challenges/bitset-1

int MaxSubArray::FindMaxNonContigiousSubArray(const std::vector<int> &vi)
{
    int nonContigiousPositiveSum = 0;
    int maxNumber = -1000;//TODO:Should be something like -MAX_INT
    std::vector<int>::const_iterator it= vi.begin();
    for(; it != vi.end(); it++){
        if(*it > 0){
        nonContigiousPositiveSum += *it;
        }
        if(*it > maxNumber)
        {
            maxNumber = *it;
        }
    }

    return nonContigiousPositiveSum>0?nonContigiousPositiveSum:maxNumber;
}


int MaxSubArray::FindMaxCrossingSubArray(const std::vector<int>& vi, const int& low, const int& mid, const int& high)
{
    int leftSumMax = -1000;//TODO:Should be something like -MAX_INT
    int leftSum = 0;

    for(int leftI = mid; leftI >=low; leftI--)
    {
        leftSum += vi.at(leftI);
        if(leftSum > leftSumMax)
        {
            leftSumMax = leftSum;
        }
    }

    int rightSumMax = 0;
    int rightSum = 0;
    for(int rightI = mid+1; rightI <= high; rightI++)
    {
        rightSum += vi.at(rightI);
        if(rightSum > rightSumMax)
        {
            rightSumMax = rightSum;
        }
    }

    return leftSumMax+rightSumMax;
}

int MaxSubArray::FindMaxContigiousSubArray(const std::vector<int> &vi, const int &low, const int &high)
{
    int maxSum;
    if(low != high)
    {
        int mid = (low + high) / 2;

        int leftSum = FindMaxContigiousSubArray(vi, low, mid);

        int rightSum = FindMaxContigiousSubArray(vi, mid+1, high);

        int crossSum = FindMaxCrossingSubArray(vi, low, mid, high);

        if((leftSum > rightSum) &&
                (leftSum > crossSum)
                )
        {
            maxSum = leftSum;
        }
        else if((rightSum > leftSum) &&
                (rightSum > crossSum)
                )
        {
            maxSum = rightSum;
        }
        else
        {
            maxSum = crossSum;
        }
    }
    else
    {
        maxSum = vi.at(low);
    }
    return maxSum;
}


int MaxSubArray::FindMaxSubArray(const std::vector<int> &vi, bool contigious)
{
    int max;
    if(contigious)
    {
        max = FindMaxContigiousSubArray(vi, 0, vi.size()-1);
    }
    else
    {
        max = FindMaxNonContigiousSubArray(vi);
    }
    return max;
}


