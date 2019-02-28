#ifndef MAX_SUB_ARRAY_H
#define MAX_SUB_ARRAY_H

#include <vector>

class MaxSubArray {
public:
    int FindMaxSubArray(const std::vector<int> &vi, bool contigious = true);

private:
    int FindMaxNonContigiousSubArray(const std::vector<int> &vi);
    int FindMaxContigiousSubArray(const std::vector<int> &vi, const int& low, const int &high);
    int FindMaxCrossingSubArray(const std::vector<int> &vi, const int &low, const int &mid, const int &high);
};

#endif //MAX_SUB_ARRAY_H
