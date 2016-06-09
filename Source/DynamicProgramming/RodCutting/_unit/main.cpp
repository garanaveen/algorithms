
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

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
