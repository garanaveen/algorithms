#define NOMINMAX

#ifdef _WIN32
# include <windows.h>
#endif // ifdef _WIN32

#include <vector>
#include <stdlib.h>
#include <MaxSubArray/MaxSubArray.h>

#include <gtest/gtest.h>
#include <algorithm>

using namespace std;


namespace {
class MaxSubArrayTest : public ::testing::Test {
protected:

  MaxSubArrayTest()
  {}

  virtual ~MaxSubArrayTest()
  {}

  void BuildVectorOfManyElements(vector<int>& vi)
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
  vector<int> vi;
  vi.push_back(1);
  vi.push_back(2);
  vi.push_back(3);
  vi.push_back(4);
    //1 2 3 4

  MaxSubArray msa;
  int start = -1;
  int end = -1;
  msa.FindMaxSubArray(vi, start, end);
  EXPECT_EQ(0, start);
  EXPECT_EQ(3, end);
}

TEST_F(MaxSubArrayTest, PositiveAndNegative)
{
  vector<int> vi;
  vi.push_back(2);
  vi.push_back(-1);
  vi.push_back(2);
  vi.push_back(3);
  vi.push_back(4);
  vi.push_back(-5);
//  2 -1 2 3 4 -5

  MaxSubArray msa;
  int start = -1;
  int end = -1;
  msa.FindMaxSubArray(vi, start, end);
  EXPECT_EQ(0, start);
  EXPECT_EQ(4, end);
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
