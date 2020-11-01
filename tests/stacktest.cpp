
#include "gtest/gtest.h"
#include "stack.h"
#include <string>

using namespace cs273;

TEST(stack, push)
{
  cs273::stack<std::string> sandwich;
  std::string t = "hello!";
  sandwich.push(t);
  EXPECT_EQ(sandwich.top(), "hello!");
}

TEST(stack, pop)
{
  cs273::stack<std::string> sandwich;
  std::string t = "hello!";
  sandwich.push(t);
  t = "Well this is awkward";
  sandwich.push(t);
  t = "jelly";
  sandwich.push(t);
  sandwich.pop();
  EXPECT_EQ(sandwich.top(), "Well this is awkward");
}

TEST(stack, empty)
{
  cs273::stack<std::string> sandwich;
  EXPECT_EQ(sandwich.empty(), true);
}

TEST(stack, size)
{
  cs273::stack<std::string> sandwich;
  std::string t = "hello!";
  sandwich.push(t);
  t = "Well this is awkward";
  sandwich.push(t);
  t = "jelly";
  sandwich.push(t);
  EXPECT_EQ(sandwich.size(), 3);
}

TEST(stack, template)
{
  cs273::stack<int> intsandwich;
  int t = 1;
  intsandwich.push(t);
  t = 2;
  intsandwich.push(t);
  t = 3;
  intsandwich.push(t);
  intsandwich.pop();
  EXPECT_EQ(intsandwich.top(), 2);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}