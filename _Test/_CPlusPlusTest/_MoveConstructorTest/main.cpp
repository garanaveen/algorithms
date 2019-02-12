#include <MoveConstructor/MoveConstructor.h>
#include <gtest/gtest.h>

using namespace std;
namespace {
class MoveConstructorTest : public ::testing::Test {
protected:

  MoveConstructorTest()
  {}

  virtual ~MoveConstructorTest()
  {}

};
}

TEST_F(MoveConstructorTest, OneEquals1)
{
  EXPECT_EQ(1, 2-1);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
