#include <GeneralCPP/GeneralCPP.h>
#include <GeneralCPP/TestConstExpr.h>
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
  TestConstExpr::TestClass ConstExprObj;

};
}

TEST_F(GeneralCPPTest, CallingFunctionsShouldWork)
{
    std::cout << sizeof(TestObj);
    TestObj.FunctionWithStdErr();
    TestObj.FunctionWithStdOut();
    ConstExprObj.SomeFunction();
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
