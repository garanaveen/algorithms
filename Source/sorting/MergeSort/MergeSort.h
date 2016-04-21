#ifndef MERGESORT_H
#define MERGESORT_H
#include <vector>

using namespace std;

class MergeSort
{
public:
    void Sort(vector<int>& list);
private:

    Merge(vector<int> &list, int start, int mid, int end);
    void DivideAndSort(vector<int> &list, int start, int end);
};

#endif // MERGESORT_H
