#define NOMINMAX

#ifdef _WIN32
# include <windows.h>
#endif // ifdef _WIN32

#include <vector>
#include <stdlib.h>
#include <BitSet/BitSet.h>

#include <gtest/gtest.h>
#include <algorithm>

using namespace std;

//https://www.hackerrank.com/challenges/bitset-1
//https://www.hackerrank.com/challenges/bitset-1/submissions/code/20097190
//http://ideone.com/i4Syuw

namespace {
class BitSetTest : public ::testing::Test {
protected:

  BitSetTest()
  {}

  virtual ~BitSetTest()
  {}

};
}

TEST_F(BitSetTest, TestCase1)
{
  BitSet bs;
  EXPECT_EQ(3, bs.GenerateUniqueNumbers(3,1,1,1));
}


TEST_F(BitSetTest, TestCase2)
{
  BitSet bs;
  EXPECT_EQ(31, bs.GenerateUniqueNumbers(100000000, 569099406, 1607140150, 823906344));
}

TEST_F(BitSetTest, TestCase3)
{
  BitSet bs;
  EXPECT_EQ(100000000, bs.GenerateUniqueNumbers(100000000, 2065188356, 657733125, 1636844041));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
