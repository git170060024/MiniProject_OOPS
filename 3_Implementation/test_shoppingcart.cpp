#include "shoppingcart.h"
#include <gtest/gtest.h>

TEST(Item, Empty_Cosnstructor)
{
  Item s1;
  //   s1 = "Bharath";
  EXPECT_EQ(NULL, s1.getName());
  EXPECT_EQ(NULL, s1.getUnit());
  EXPECT_EQ(0, s1.getPrice());
  EXPECT_EQ(0,s1.getQuantity());

}

TEST(Item, Param_Cosnstructor)
{
  Item s1("Bharath","fruit",10,10);
  EXPECT_EQ("Bharath", s1.getName());
  EXPECT_EQ("Fruit",s1.getUnit());
  EXPECT_EQ(10,s1.getPrice());
  EXPECT_EQ(10,s1.getQuantity());
}
/*
TEST(mystring, Copy_Cosnstructor)
{
  mystring s1("Bharath");
  mystring s2(s1);
  EXPECT_STREQ("Bharath", s1.get_str());
  EXPECT_EQ(7, s1.get_len());

  EXPECT_STREQ("Bharath", s2.get_str());
  EXPECT_EQ(7, s2.get_len());
}
TEST(mystring, AssignmentOperator)
{
  mystring s1("Dummy Name");

  s1 = "Bharath";
  EXPECT_STREQ("Bharath", s1.get_str());
  EXPECT_EQ(7, s1.get_len());
}

TEST(mystring, AddTwoMyStrings)
{
  mystring s1("Bharath");
  mystring s2(" Gopal");
  mystring s3 = s1 + s2;
  EXPECT_STREQ("Bharath Gopal", s3.get_str());
  EXPECT_EQ(13, s3.get_len());
}

TEST(mystring, AddMyStringCharString)
{
  mystring s1("Bharath");
  mystring s2 = s1 + " Gopal";
  EXPECT_STREQ("Bharath Gopal", s2.get_str());
  EXPECT_EQ(13, s2.get_len());
}

TEST(mystring, CompareMystrings)
{
  mystring s1("Bharath");
  mystring s2 = "Gopal";
  EXPECT_EQ(-5, (s1 == s2));
  
  s2 = "Chennai";
  EXPECT_EQ(-1, (s1 == s2));

  s2 = "Bharath";
  EXPECT_EQ(0, (s1 == s2));
}

TEST(mystring, lessThanOperator)
{
  mystring s1("Bharath");
  mystring s2 = "Gopal";
  EXPECT_EQ(true, (s1 < s2));
  EXPECT_EQ(false, (s2 < s1));
}
TEST(mystring, greaterThanOperator)
{
  mystring s1("Bharath");
  mystring s2 = "Gopal";
  EXPECT_EQ(false, (s1 > s2));
  EXPECT_EQ(true, (s2 > s1));
}

TEST(mystring, addAndAssignMystrings)
{
  mystring s1("Bharath");
  mystring s2(" Gopal");
  s1 += s2;
  EXPECT_STREQ("Bharath Gopal", s1.get_str());
  EXPECT_STREQ(" Gopal", s2.get_str());
  
  mystring s3;
  s3 += s2;
  EXPECT_STREQ(" Gopal", s3.get_str()); 
}
TEST(mystring, addAndAssignMystringCharString)
{
  mystring s1("Bharath");
  s1 += " Gopal";
  EXPECT_STREQ("Bharath Gopal", s1.get_str());
}
*/