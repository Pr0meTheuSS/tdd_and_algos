#include <gtest/gtest.h>

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

