#include <gtest/gtest.h>
#include <limits.h>

#include "../../src/factorial/factorial.hpp"

TEST(FactorialPositiveTest, Zero) {
    auto result = TddMath::factorial(0);
    long expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(FactorialPositiveTest, PositiveNumber) {
    auto result = TddMath::factorial(5);
    long expected = 120;
    EXPECT_EQ(expected, result);
}

TEST(FactorialTest, Overflow) {
    EXPECT_NO_THROW(TddMath::factorial(ULLONG_WIDTH - 1));
    EXPECT_THROW(TddMath::factorial(ULLONG_WIDTH), std::overflow_error);
    EXPECT_THROW(TddMath::factorial(ULLONG_WIDTH + 1), std::overflow_error);
}

TEST(FactorialTest, NegativeInput) {
    EXPECT_THROW(TddMath::factorial(-10), std::overflow_error);
}
