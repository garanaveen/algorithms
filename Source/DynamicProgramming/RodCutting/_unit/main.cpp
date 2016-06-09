
#include <DynamicProgramming/RodCutting/RodCutting.h>
#include<vector>
#include <gtest/gtest.h>

using namespace std;

class RodCuttingTest : public ::testing::Test
{
protected:
    RodCuttingTest()
    {}
    ~RodCuttingTest()
    {}
};


//TODO::Failing test
TEST_F(RodCuttingTest, Test1)
{
    RodCutting rc;
    vector<pair<int, int> > priceTable;
    priceTable.push_back(make_pair(1,1));
    priceTable.push_back(make_pair(2,5));
    priceTable.push_back(make_pair(3,8));
    priceTable.push_back(make_pair(4,9));
    priceTable.push_back(make_pair(5,10));
    priceTable.push_back(make_pair(6,17));
    priceTable.push_back(make_pair(7,17));
    priceTable.push_back(make_pair(8,20));

    rc.SetPriceTable(priceTable);
    EXPECT_EQ(0, rc.FirstCut(0));
    EXPECT_EQ(1, rc.FirstCut(1));//1->1/1->1
    EXPECT_EQ(2, rc.FirstCut(2));//2->2/5->5
    EXPECT_EQ(3, rc.FirstCut(3));//3->3/8->8
    EXPECT_EQ(2, rc.FirstCut(4));//4->2/5,2/5->10
    EXPECT_EQ(3, rc.FirstCut(5));//5->3/8,2/5->13
    EXPECT_EQ(6, rc.FirstCut(6));//6->6/17->17
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
