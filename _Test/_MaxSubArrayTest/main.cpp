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

TEST_F(SortTest, TestCase1)
{
  vector<int> vi;
  BuildVectorOfManyElements(vi);
  vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  MaxSubArray msa;
  msa.Fi
  EXPECT_EQ(vi, expectedList);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
