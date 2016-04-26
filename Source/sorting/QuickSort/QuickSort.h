#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <vector>

using namespace std;

class QuickSort{
public:
    void Sort(vector<int>& v);

private:
    int Partition(vector<int>& v, int start, int end);
    void Sort(vector<int> &v, int start, int end);
};

#endif //QUICK_SORT_H
