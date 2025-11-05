/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("Z"));
}
TEST(PasswordTest, empty_string_password)
{
	Password my_password;
	ASSERT_EQ(0, my_password.count_leading_characters(""));
}
TEST(PasswordTest, two_letters_check)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("aab"));
}
TEST(PasswordTest, capital_and_lowercase_mix)
{
	Password my_password;
	ASSERT_EQ(3, my_password.count_leading_characters("TTTtest"));
}
TEST(PasswordTest, three_spaces_password)
{
	Password my_password;
	ASSERT_EQ(3, my_password.count_leading_characters("   "));
}
TEST(PasswordTest, null_ascii_character)
{
	Password my_password;
	ASSERT_EQ(3, my_password.count_leading_characters("\0\0\0"));
}
