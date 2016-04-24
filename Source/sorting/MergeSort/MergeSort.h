#ifndef MERGESORT_H
#define MERGESORT_H
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

template<class T>
class MergeSort {
public:

  void Sort(vector<T>& list)
  {
    // Index Ex. 0,1, 2,3, 4,5, 6,7
    // Value Ex. 3,4, 1,2, 9,8, 7,6
    DivideAndSort(list, 0, list.size() - 1);
  }

private:

  void DivideAndSort(vector<T>& list, int start, int end)
  {
    int mid = (start + end) / 2;

    if (end > mid)
    {
      DivideAndSort(list, start,   mid);
      DivideAndSort(list, mid + 1, end);
      Merge(list, start, mid, end);
    }
  }

  void Merge(vector<T>& list, int start, int mid, int end)
  {
    vector<T> leftHalf(list.begin() + start, list.begin() + mid + 1);
    leftHalf.push_back(INT_MAX);//TODO : This works only for ints. Need to change this concept of infinity!!
    vector<T> rightHalf(list.begin() + mid + 1, list.begin() + end + 1);
    rightHalf.push_back(INT_MAX);
    int leftIndex  = 0;
    int leftSize   = leftHalf.size();
    int rightIndex = 0;
    int rightSize  = rightHalf.size();

    for (int i = start; i <= end; i++)
    {
      list[i] = leftHalf.at(leftIndex) < rightHalf.at(rightIndex) ?
                leftHalf.at(leftIndex++) : rightHalf.at(rightIndex++);
    }
  }
};

#endif // MERGESORT_H
