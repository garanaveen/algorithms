
#include "MaxSubArray.h"

int MaxSubArray::FindMaxSubArray(const vector<int> &vi)
{
    return FindMaxSubArray(vi, 0, vi.size());
}

int MaxSubArray::FindMaxSubArray(const vector<int> &vi, const int &low, const int &high)
{
    int maxSum;
    if(low != high)
    {
        int mid = (low + high) / 2;

        int leftSum = FindMaxSubArray(vi, low, mid);

        int rightSum = FindMaxSubArray(vi, mid+1, high);

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
}

int MaxSubArray::FindMaxCrossingSubArray(const vector<int>& vi, const int& low, const int& mid, const int& high)
{
    //return crossSum;
}
