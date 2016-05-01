#ifndef MAX_SUB_ARRAY_H
#define MAX_SUB_ARRAY_H

#include <vector>
using namespace std;

class MaxSubArray {
public:
    int FindMaxSubArray(const vector<int> &vi);

private:
    int FindMaxSubArray(const vector<int> &vi, const int& low, const int &high, int& max_low, int& max_high);
    int FindMaxCrossingSubArray(const vector<int> &vi, const int &low, const int &mid, const int &high);
};

#endif //MAX_SUB_ARRAY_H
