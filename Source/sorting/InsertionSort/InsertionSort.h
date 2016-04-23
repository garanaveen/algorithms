#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <vector>
using namespace std;

template<class T>
class InsertionSort
{
public:
    void Sort(vector<T>& list)
	{
    int length = list.size();

    for(int i = 1; i < length ; i++)
        for(int j = i; j> 0; j--)
            if(list[j] < list[j-1]){
                 int tmp = list[j-1];
                 list[j-1] = list[j];
                 list[j] = tmp;
            }
    return;
	}

};

#endif //INSERTION_SORT_H
