#define NOMINMAX

#ifdef _WIN32
# include <windows.h>
#endif // ifdef _WIN32

#include <vector>
#include <stdlib.h>
#include <SampleApp/SampleApp.h>

#include <gtest/gtest.h>
#include <algorithm>

using namespace std;

namespace {
class SampleAppTest : public ::testing::Test {
protected:

  SampleAppTest()
  {}

  virtual ~SampleAppTest()
  {}

};
}

TEST_F(SampleAppTest, SampleFunctionReturnsZero)
{
  SampleApp bs;
  EXPECT_EQ(0, bs.SampleFunction());
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
