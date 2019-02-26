#include "QuickSort.h"

void QuickSort::Sort(std::vector<int> &v)
{
    Sort(v, 0, v.size()-1);
}

void QuickSort::Sort(std::vector<int> &v, int start, int end)
{
    if(start < end)
    {
        int pivot = Partition(v, start, end);
        Sort(v, start, pivot-1);
        Sort(v, pivot+1, end);
    }
}

int QuickSort::Partition(std::vector<int> &v, int start, int end)
{
    int i = start;
    int pivotValue = v[end];
    for (int j = start ; j < end; j++)
    {
        if (v[j] <= pivotValue)
        {
            int tmp = v[j];
            v[j] = v[i];
            v[i] = tmp;
            i++;
        }
    }
    v[end] = v[i];
    v[i] = pivotValue;

    return i;
}
