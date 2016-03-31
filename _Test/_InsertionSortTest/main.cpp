#define NOMINMAX
#include <windows.h>

#include <vector>
#include <sorting/InsertionSort/InsertionSort.h>
#include <gtest/gtest.h>

using namespace std;

//Useful links.
//https://github.com/google/googletest
//https://github.com/google/googletest/blob/master/googletest/docs/Primer.md
//You can start from this boilerplate:

namespace{

    class InsertionSortTest : public ::testing::Test
    {
    protected:
        InsertionSortTest()
        {

        }
        virtual ~InsertionSortTest()
        {

        }
        virtual void SetUp()
        {
            vi.push_back(2);
            vi.push_back(1);
        }

        virtual void TearDown()
        {

        }

        vector<int> vi;
        InsertionSort isort;
};
}

TEST_F(InsertionSortTest, FirstTest)
{
    EXPECT_EQ(1,1);
}

TEST_F(InsertionSortTest, TwoElementSort)
{
    isort.Sort(vi);
    EXPECT_EQ(1,vi.at(0));
    EXPECT_EQ(2,vi.at(1));
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
