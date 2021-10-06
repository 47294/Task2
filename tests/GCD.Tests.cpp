#include "../includes/GCD..h"

#include <gtest/gtest.h>
TEST (CheckingLog2, eight)
{
	ASSERT_DOUBLE_EQ(log2(8), 3);
}
TEST (CheckingLog2, nine)
{
	ASSERT_DOUBLE_EQ(log2(9), -1);
}
TEST (CheckingLog2, zero)
{
	ASSERT_DOUBLE_EQ(log2(0), -2);
}
