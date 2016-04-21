#define NOMINMAX
#include <windows.h>

#include <vector>
#include <stdlib.h>
#include <sorting/InsertionSort/InsertionSort.h>
#include <sorting/MergeSort/MergeSort.h>

#include <gtest/gtest.h>
#include<algorithm>

using namespace std;

//Useful links.
//https://github.com/google/googletest
//https://github.com/google/googletest/blob/master/googletest/docs/Primer.md
//You can start from this boilerplate:

namespace{

    class SortTest : public ::testing::Test
    {
    protected:
        SortTest()
        {

        }

        virtual ~SortTest()
        {

        }

        virtual void SetUp()
        {
        }

        virtual void TearDown()
        {
            vi.clear();
        }

        void BuildVectorOfOfTwoElements()
        {
            vi.push_back(2);
            vi.push_back(1);
        }

        BuildVectorOfOfFourElements()
        {
            vi.push_back(3);
            vi.push_back(4);
            vi.push_back(1);
            vi.push_back(2);
        }

        void BuildVectorOfManyElements()
        {
            for (int i=0; i<100 ; i++)
            {
                vi.push_back(rand());
            }
        }

        vector<int> vi;
        InsertionSort isort;
};
}

TEST_F(SortTest, InsertionSortTwoElements)
{
    BuildVectorOfOfTwoElements();
    InsertionSort isort;
    isort.Sort(vi);
    EXPECT_EQ(1,vi.at(0));
    EXPECT_EQ(2,vi.at(1));
}


TEST_F(SortTest, InsertionSortManyElements)
{
    BuildVectorOfManyElements();
    vector<int> expectedList = vi;
    std::sort(expectedList.begin(), expectedList.end());
    InsertionSort isort;
    isort.Sort(vi);
    EXPECT_EQ(vi, expectedList);
}

TEST_F(SortTest, MergeSortTwoElements)
{
    BuildVectorOfOfTwoElements();
    MergeSort msort;
    msort.Sort(vi);
    EXPECT_EQ(1,vi.at(0));
    EXPECT_EQ(2,vi.at(1));
}

TEST_F(SortTest, MergeSortFourElements)
{
    BuildVectorOfOfFourElements();
    MergeSort msort;
    msort.Sort(vi);
    EXPECT_EQ(1,vi.at(0));
    EXPECT_EQ(2,vi.at(1));
}


TEST_F(SortTest, MergeSortManyElements)
{
    BuildVectorOfManyElements();
    vector<int> expectedList = vi;
    std::sort(expectedList.begin(), expectedList.end());
    MergeSort msort;
    msort.Sort(vi);
    EXPECT_EQ(expectedList, vi);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
