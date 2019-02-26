#pragma once

#include <vector>

class QuickSort{
public:
    void Sort(std::vector<int>& v);

private:
    int Partition(std::vector<int>& v, int start, int end);
    void Sort(std::vector<int> &v, int start, int end);
};

