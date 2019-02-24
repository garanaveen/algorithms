#define NOMINMAX

#ifdef _WIN32
# include <windows.h>
#endif // ifdef _WIN32

#include <vector>
#include <stdlib.h>
#include "SupermarketQueue/SupermarketQueue.h"

#include <gtest/gtest.h>
#include <algorithm>

using namespace std;

namespace {
class SupermarketQueueTest : public ::testing::Test {
protected:

  SupermarketQueueTest()
  {}

  virtual ~SupermarketQueueTest()
  {}

};
}

TEST_F(SupermarketQueueTest, OneQueueShouldJustAddUpAllTheCustomerTimes)
{
    SupermarketQueue sq;
    constexpr const int numberOfQueues = 1;
    std::vector<int> singlequeue = {1,2,3};
    EXPECT_EQ(6, sq.CalculateTime(singlequeue, numberOfQueues));
}


TEST_F(SupermarketQueueTest, SimpleCaseForTwoQueues)
{
    SupermarketQueue sq;
    constexpr const int numberOfQueues = 2;
    std::vector<int> queue = {2, 3, 4, 5};
    EXPECT_EQ(8, sq.CalculateTime(queue, numberOfQueues));
}

TEST_F(SupermarketQueueTest, Test3)
{
    SupermarketQueue sq;
    constexpr const int numberOfQueues = 2;
    std::vector<int> queue = {10,2,3,3};
    EXPECT_EQ(10, sq.CalculateTime(queue, numberOfQueues));
}

TEST_F(SupermarketQueueTest, Test4)
{
    SupermarketQueue sq;
    constexpr const int numberOfQueues = 2;
    std::vector<int> queue = {2,3,10};
    EXPECT_EQ(12, sq.CalculateTime(queue, numberOfQueues));
}





int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
