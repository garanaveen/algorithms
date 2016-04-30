#ifndef MAX_SUB_ARRAY_H
#define MAX_SUB_ARRAY_H

#include <vector>
using namespace std;

template<class T>
class MaxSubArray {
public:
    void FindMaxSubArray();

private:
    void FindMaxCrossingSubArray();
};

#endif // MAX_SUB_ARRAY_H
