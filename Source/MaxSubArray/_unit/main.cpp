#define NOMINMAX

#ifdef _WIN32
# include <windows.h>
#endif // ifdef _WIN32

#include <vector>
#include <stdlib.h>
#include <MaxSubArray/MaxSubArray.h>

#include <gtest/gtest.h>
#include <algorithm>

/*
 * https://www.hackerrank.com/challenges/maxsubarray
 * https://www.hackerrank.com/challenges/maxsubarray/submissions/code/20003555
 *
*/

namespace {
class MaxSubArrayTest : public ::testing::Test {
protected:

  MaxSubArrayTest()
  {}

  virtual ~MaxSubArrayTest()
  {}

  void BuildvectorOfManyElements(std::vector<int>& vi)
  {
    for (int i = 0; i < 100; i++)
    {
      vi.push_back(rand());
    }
  }
};
}

TEST_F(MaxSubArrayTest, AllPositives)
{
  std::vector<int> vi;
  vi.push_back(1);
  vi.push_back(2);
  vi.push_back(3);
  vi.push_back(4);
  vi.push_back(5);
    //1 2 3 4 5

  MaxSubArray msa;
  int maxContiguousSum = msa.FindMaxSubArray(vi);
  int maxNonContiguousSum = msa.FindMaxSubArray(vi, false);
  EXPECT_EQ(15, maxContiguousSum);
  EXPECT_EQ(15, maxNonContiguousSum);
}

TEST_F(MaxSubArrayTest, AllNegative)
{
    std::vector<int> vi;
    vi.push_back(-100);
    vi.push_back(-1);

    MaxSubArray msa;
    int maxContigiousSum = msa.FindMaxSubArray(vi);
    int maxNonContiguousSum = msa.FindMaxSubArray(vi, false);
    EXPECT_EQ(-1, maxContigiousSum);
    EXPECT_EQ(-1, maxNonContiguousSum);
}

TEST_F(MaxSubArrayTest, PositiveAndNegative)
{
  std::vector<int> vi;
  vi.push_back(2);
  vi.push_back(-1);
  vi.push_back(2);
  vi.push_back(3);
  vi.push_back(4);
  vi.push_back(-5);

  MaxSubArray msa;
  int maxContigiousSum = msa.FindMaxSubArray(vi);
  int maxNonContiguousSum = msa.FindMaxSubArray(vi, false);
  EXPECT_EQ(10, maxContigiousSum);
  EXPECT_EQ(11, maxNonContiguousSum);
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
