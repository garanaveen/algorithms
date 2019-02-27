#include "QuickSort.h"
#include <iostream>

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
    //std::cout << "(" << start << "," << end << ")" << std::endl;
    //for (int j = start ; j < end; j++)
    for (int j = start ; j <= end; j++)
    {
	//std::cout << i << "," << j << std::endl;
	if (v[j] <= pivotValue)
	{
	    int tmp = v[j];
	    v[j] = v[i];
	    v[i] = tmp;
	    i++;
	}
    }
    //   v[end] = v[i];
    //  v[i] = pivotValue;

    return i-1;
    //return i;
}

