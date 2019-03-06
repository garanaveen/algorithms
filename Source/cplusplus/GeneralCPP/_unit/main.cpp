#include <GeneralCPP/GeneralCPP.h>
#include <GeneralCPP/TestConstExpr.h>
#include <vector>
#include <gtest/gtest.h>

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

TEST_F(GeneralCPPTest, ReturningVectorDirectly)
{
   std::cout<< "ReturningVectorDirectly : ";
   std::vector<int> vec = TestObj.ReturnVector();
   for(int& i : vec)
   {
      std::cout<< i << "," ;
   }
   std::cout << std::endl;
}

int main(int argc, char **argv)
{
   ::testing::InitGoogleTest(&argc, argv);

   return RUN_ALL_TESTS();
}
