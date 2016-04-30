#define NOMINMAX

#ifdef _WIN32
# include <windows.h>
#endif // ifdef _WIN32

#include <vector>
#include <stdlib.h>
#include <Sorting/InsertionSort/InsertionSort.h>
#include <Sorting/MergeSort/MergeSort.h>
#include <Sorting/QuickSort/QuickSort.h>

#include <gtest/gtest.h>
#include <algorithm>

using namespace std;

// Useful links.
// https://github.com/google/googletest
// https://github.com/google/googletest/blob/master/googletest/docs/Primer.md
// You can start from this boilerplate:

namespace {
class SortTest : public ::testing::Test {
protected:

  SortTest()
  {}

  virtual ~SortTest()
  {}

  void BuildVectorOfOfTwoElements(vector<int>& vi)
  {
    vi.push_back(2);
    vi.push_back(1);
  }

  void BuildVectorOfOfFourElements(vector<int>& vi)
  {
    vi.push_back(3);
    vi.push_back(4);
    vi.push_back(1);
    vi.push_back(2);
  }

  void BuildVectorOfManyElements(vector<int>& vi)
  {
    for (int i = 0; i < 100; i++)
    {
      vi.push_back(rand());
    }
  }

  void BuildVectorOfManyDoubles(vector<double>& vd)
  {
    for (int i = 0; i < 100; i++)
    {
      vd.push_back(rand());
    }
  }
};
}

TEST_F(SortTest, InsertionSortTwoElements)
{
  vector<int> vi;
  BuildVectorOfOfTwoElements(vi);
  InsertionSort<int> isort;
  isort.Sort(vi);
  EXPECT_EQ(1, vi.at(0));
  EXPECT_EQ(2, vi.at(1));
}

TEST_F(SortTest, InsertionSortManyElements)
{
  vector<int> vi;
  BuildVectorOfManyElements(vi);
  vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  InsertionSort<int> isort;
  isort.Sort(vi);
  EXPECT_EQ(vi, expectedList);
}

TEST_F(SortTest, MergeSortTwoElements)
{
  vector<int> vi;
  BuildVectorOfOfTwoElements(vi);
  MergeSort<int> msort;
  msort.Sort(vi);
  EXPECT_EQ(1, vi.at(0));
  EXPECT_EQ(2, vi.at(1));
}

TEST_F(SortTest, MergeSortFourElements)
{
  vector<int> vi;
  BuildVectorOfOfFourElements(vi);
  MergeSort<int> msort;
  msort.Sort(vi);
  EXPECT_EQ(1, vi.at(0));
  EXPECT_EQ(2, vi.at(1));
  EXPECT_EQ(3, vi.at(2));
  EXPECT_EQ(4, vi.at(3));
}

TEST_F(SortTest, MergeSortManyElements)
{
  vector<int> vi;
  BuildVectorOfManyElements(vi);
  vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  MergeSort<int> msort;
  msort.Sort(vi);
  EXPECT_EQ(expectedList, vi);
}

TEST_F(SortTest, MergeSortForDoubles)
{
  vector<double> vd;
  BuildVectorOfManyDoubles(vd);
  vector<double> expectedList = vd;
  std::sort(expectedList.begin(), expectedList.end());
  MergeSort<double> msort;
  msort.Sort(vd);
  EXPECT_EQ(expectedList, vd);
}

TEST_F(SortTest, QuickSortFourElements)
{
  vector<int> vi;
  BuildVectorOfOfFourElements(vi);
  QuickSort qsort;
  qsort.Sort(vi);
  EXPECT_EQ(1, vi.at(0));
  EXPECT_EQ(2, vi.at(1));
  EXPECT_EQ(3, vi.at(2));
  EXPECT_EQ(4, vi.at(3));
}

TEST_F(SortTest, QuickSortManyElements)
{
  vector<int> vi;
  BuildVectorOfManyElements(vi);
  vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  QuickSort qsort;
  qsort.Sort(vi);
  EXPECT_EQ(expectedList, vi);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
