#ifndef MAX_SUB_ARRAY_H
#define MAX_SUB_ARRAY_H

#include <vector>
using namespace std;

class MaxSubArray {
public:
    int FindMaxSubArray(const vector<int> &vi, bool contigious = true);

private:
    int FindMaxNonContigiousSubArray(const vector<int> &vi);
    int FindMaxContigiousSubArray(const vector<int> &vi, const int& low, const int &high);
    int FindMaxCrossingSubArray(const vector<int> &vi, const int &low, const int &mid, const int &high);
};

#endif //MAX_SUB_ARRAY_H
