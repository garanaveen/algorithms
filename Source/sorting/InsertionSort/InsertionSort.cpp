#include "InsertionSort.h"
#include <algorithm>

using namespace std;

void InsertionSort::Sort(vector<int> &list)
{
    int key = list.at(0);
    if (key > list.at(1)){
        list[0] = list[1];
        list[1] = key;
    }
    return;
}
