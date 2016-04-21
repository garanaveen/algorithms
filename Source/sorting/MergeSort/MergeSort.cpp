#include "MergeSort.h"
#include <algorithm>

void MergeSort::Sort(vector<int> &list)
{
    //Index Ex. 0,1, 2,3, 4,5, 6,7
    //Value Ex. 3,4, 1,2, 9,8, 7,6
    DivideAndSort(list, 0, list.size()-1);
}

void MergeSort::DivideAndSort(vector<int>& list, int start, int end)
{
    int mid = (start + end)/2;
    if(end > mid)
    {
        DivideAndSort(list, start, mid);
        DivideAndSort(list, mid+1, end);
        Merge(list, start, mid, end);
    }
}

MergeSort::Merge(vector<int>& list, int start, int mid, int end)
{
    vector<int> leftHalf;
    leftHalf.reserve(mid-start+1);

    for(int i = 0; i < mid-start+1; i++)
    {
        leftHalf.push_back(list.at(start+i));
    }

    vector<int> rightHalf;
    rightHalf.reserve(end-mid);
    for(int i = 0; i < end-mid; i++)
    {
        rightHalf.push_back(list.at(mid+1+i));
    }

    int leftIndex = 0;
    int leftSize = leftHalf.size();
    int rightIndex = 0;
    int rightSize = rightHalf.size();
    for (int i = start; i <= end; i++)
    {
        if(leftIndex >= leftSize)
        {
            list[i] = rightHalf.at(rightIndex++);
        }

        else if(rightIndex >= rightSize)
        {
            list[i] = leftHalf.at(leftIndex++);
        }
        else
        {
            list[i] = leftHalf.at(leftIndex) < rightHalf.at(rightIndex) ?
                    leftHalf.at(leftIndex++) : rightHalf.at(rightIndex++);
        }
    }
}
