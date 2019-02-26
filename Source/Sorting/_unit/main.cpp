#define NOMINMAX

#ifdef _WIN32
# include <windows.h>
#endif // ifdef _WIN32

#include <vector>
#include <stdlib.h>
#include <Sorting/InsertionSort/InsertionSort.h>
#include <Sorting/MergeSort/MergeSort.h>
#include <Sorting/QuickSort/QuickSort.h>
#include <Sorting/HeapSort/HeapSort.h>

#include <gtest/gtest.h>
#include <algorithm>

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

  void BuildVectorOfOfTwoElements(std::vector<int>& vi)
  {
    vi.push_back(2);
    vi.push_back(1);
  }

  void BuildVectorOfOfFourElements(std::vector<int>& vi)
  {
    vi.push_back(3);
    vi.push_back(4);
    vi.push_back(1);
    vi.push_back(2);
  }

  void BuildVectorOfOfSevenElements(std::vector<int>& vi)
  {
   vi.push_back(1);
   vi.push_back(2);
   vi.push_back(3);
   vi.push_back(4);

   vi.push_back(5);
   vi.push_back(6);
   vi.push_back(7);
  }

  void BuildVectorOfManyElements(std::vector<int>& vi, int max = 1000)
  {
    for (int i = 0; i < 100; i++)
    {
      vi.push_back(rand() % max);
    }
  }

  void BuildVectorOfManyDoubles(std::vector<double>& vd)
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
  std::vector<int> vi;
  BuildVectorOfOfTwoElements(vi);
  InsertionSort<int> isort;
  isort.Sort(vi);
  EXPECT_EQ(1, vi.at(0));
  EXPECT_EQ(2, vi.at(1));
}

TEST_F(SortTest, InsertionSortManyElements)
{
  std::vector<int> vi;
  BuildVectorOfManyElements(vi);
  std::vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  InsertionSort<int> isort;
  isort.Sort(vi);
  EXPECT_EQ(vi, expectedList);
}

TEST_F(SortTest, MergeSortTwoElements)
{
  std::vector<int> vi;
  BuildVectorOfOfTwoElements(vi);
  MergeSort<int> msort;
  msort.Sort(vi);
  EXPECT_EQ(1, vi.at(0));
  EXPECT_EQ(2, vi.at(1));
}

TEST_F(SortTest, MergeSortFourElements)
{
  std::vector<int> vi;
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
  std::vector<int> vi;
  BuildVectorOfManyElements(vi);
  std::vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  MergeSort<int> msort;
  msort.Sort(vi);
  EXPECT_EQ(expectedList, vi);
}

TEST_F(SortTest, MergeSortForDoubles)
{
  std::vector<double> vd;
  BuildVectorOfManyDoubles(vd);
  std::vector<double> expectedList = vd;
  std::sort(expectedList.begin(), expectedList.end());
  MergeSort<double> msort;
  msort.Sort(vd);
  EXPECT_EQ(expectedList, vd);
}

TEST_F(SortTest, QuickSortFourElements)
{
  std::vector<int> vi;
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
  std::vector<int> vi;
  BuildVectorOfManyElements(vi);
  std::vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  QuickSort qsort;
  qsort.Sort(vi);
  EXPECT_EQ(expectedList, vi);
}

TEST_F(SortTest, HeapSortHeight2)
{
  std::vector<int> vi;
  BuildVectorOfOfSevenElements(vi);
  HeapSort hsort(vi);
  hsort.Sort();
  std::vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  EXPECT_EQ(expectedList, vi);
}

TEST_F(SortTest, HeapSortManyElements)
{
  std::vector<int> vi;
  BuildVectorOfManyElements(vi);
  std::vector<int> expectedList = vi;
  std::sort(expectedList.begin(), expectedList.end());
  HeapSort hsort(vi);
  hsort.Sort();
  EXPECT_EQ(expectedList, vi);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
