#include "InsertionSort.h"
#include <algorithm>

using namespace std;

void InsertionSort::Sort(vector<int> &list)
{
    int length = list.size();//2

    for(int i = 1; i < length; i++){
        int j = i;//1
        while(j > 0 && list.at(j) < list.at(j-1)){
            int tmp = list[j];
            list[j] = list[j-1];
            list[j-1] = tmp;
            j = j-1;
        }
    }

    return;
}

