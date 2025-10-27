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

TEST(FactorialPositiveTest, PositiveNumbers) {
    EXPECT_EQ(1, TddMath::factorial(0));
    EXPECT_EQ(1, TddMath::factorial(1));
    EXPECT_EQ(2, TddMath::factorial(2));
    EXPECT_EQ(6, TddMath::factorial(3));
    EXPECT_EQ(24, TddMath::factorial(4));
    EXPECT_EQ(120, TddMath::factorial(5));
    EXPECT_EQ(720, TddMath::factorial(6));
    EXPECT_EQ(5'040, TddMath::factorial(7));
    EXPECT_EQ(40'320, TddMath::factorial(8));
    EXPECT_EQ(362'880, TddMath::factorial(9));
    EXPECT_EQ(3'628'800, TddMath::factorial(10));
    EXPECT_EQ(39'916'800, TddMath::factorial(11));
    EXPECT_EQ(479'001'600, TddMath::factorial(12));
    EXPECT_EQ(6'227'020'800, TddMath::factorial(13));
    EXPECT_EQ(87'178'291'200, TddMath::factorial(14));
    EXPECT_EQ(1'307'674'368'000, TddMath::factorial(15));
    EXPECT_EQ(20'922'789'888'000, TddMath::factorial(16));
    EXPECT_EQ(355'687'428'096'000, TddMath::factorial(17));
    EXPECT_EQ(6'402'373'705'728'000, TddMath::factorial(18));
    EXPECT_EQ(121'645'100'408'832'000, TddMath::factorial(19));
    EXPECT_EQ(2'432'902'008'176'640'000, TddMath::factorial(20));
    // EXPECT_EQ(51090942171709440000, TddMath::factorial(21)); <--- // INTEGER CONST TOO LARGE
}
TEST(FactorialTest, Overflow) {
    EXPECT_THROW(TddMath::factorial(21), std::overflow_error);
    EXPECT_THROW(TddMath::factorial(ULLONG_WIDTH), std::overflow_error);
    EXPECT_THROW(TddMath::factorial(ULLONG_WIDTH + 1), std::overflow_error);
}

TEST(FactorialTest, NegativeInput) {
    EXPECT_THROW(TddMath::factorial(-10), std::overflow_error);
}
