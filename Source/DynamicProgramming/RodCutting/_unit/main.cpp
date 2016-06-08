
#include <gtest/gtest.h>

class RodCuttingTest : public ::testing::Test
{
protected:
    RodCuttingTest()
    {}
    ~RodCuttingTest()
    {}
};


TEST_F(RodCuttingTest, Test1)
{
    EXPECT_EQ(1,1);
}
