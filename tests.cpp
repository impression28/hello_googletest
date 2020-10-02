#include <optional>
#include <gtest/gtest.h>

int unsafe_factorial(int n)
{
	return n == 0 ? 1 : n*unsafe_factorial(n-1);
}
std::optional<int> factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			return {1};
		}
		else
		{
			return {n*unsafe_factorial(n-1)};
		}
	}
	else
	{
		return {};
	}
}

TEST(FactorialTest, HandlesZeroInput)
{
	EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput)
{
	EXPECT_EQ(factorial(1), std::optional(1));
	EXPECT_EQ(factorial(2), std::optional(2));
	EXPECT_EQ(factorial(3), std::optional(6));
	EXPECT_EQ(factorial(8), std::optional(40320));
}

TEST(FactorialTest, HandlesNegativeInput)
{
	EXPECT_EQ(factorial(-1), std::optional<int>());
}
