#include "../includes/GCD.h"

#include <gtest/gtest.h>
TEST (CheckingRecGCD, four)
{
	ASSERT_DOUBLE_EQ(RecursiveGCD(4,8), 4);
}
TEST (CheckingGCD, three)
{
	ASSERT_DOUBLE_EQ(GCD(3,9), 3);
}
TEST (CheckingRecGCD, three)
{
	ASSERT_DOUBLE_EQ(RecursiveGCD(9,3), 3);
}
TEST (CheckingGCD, four)
{
	ASSERT_DOUBLE_EQ(GCD(8,4), 4);
}

