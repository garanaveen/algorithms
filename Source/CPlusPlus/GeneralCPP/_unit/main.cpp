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

  GeneralCPP TestObj;

};
}

TEST_F(GeneralCPPTest, CallingFunctionsShouldWork)
{
    TestObj.FunctionWithStdErr();
    TestObj.FunctionWithStdOut();
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
