#include <GeneralCPP/GeneralCPP.h>
#include <gtest/gtest.h>

using namespace std;
namespace {
class GeneralCPPTest : public ::testing::Test {
protected:

  GeneralCPPTest()
  {}

  virtual ~GeneralCPPTest()
  {}

};
}

TEST_F(GeneralCPPTest, OneEquals1)
{
  EXPECT_EQ(1, 2-1);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
