#define NOMINMAX

#ifdef _WIN32
# include <windows.h>
#endif // ifdef _WIN32

#include <vector>
#include <stdlib.h>
#include <RomanNumerals/RomanNumerals.h>

#include <gtest/gtest.h>
#include <algorithm>

using namespace std;

namespace {
class RomanNumeralsTest : public ::testing::Test {
protected:

  RomanNumeralsTest()
  {}

  virtual ~RomanNumeralsTest()
  {}

};
}

TEST_F(RomanNumeralsTest, SampleFunctionReturnsZero)
{
  RomanNumerals bs;
  EXPECT_EQ("I", bs.Convert(1));
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}