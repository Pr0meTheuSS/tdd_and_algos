#include <gtest/gtest.h>
#include <limits.h>

#include "../../src/fibonacci/fibonacci.hpp"

TEST(FibbonacciPositiveTest, Zero) {
    auto result = TddMath::fibonacci(0);
    long expected = 0;
    EXPECT_EQ(expected, result);
}

TEST(FibbonacciPositiveTest, PositiveNumbers) {
    EXPECT_EQ(0, TddMath::fibonacci(0));
    EXPECT_EQ(1, TddMath::fibonacci(1));
    EXPECT_EQ(1, TddMath::fibonacci(2));
    EXPECT_EQ(2, TddMath::fibonacci(3));
    EXPECT_EQ(3, TddMath::fibonacci(4));
    EXPECT_EQ(5, TddMath::fibonacci(5));
    EXPECT_EQ(8, TddMath::fibonacci(6));
    EXPECT_EQ(13, TddMath::fibonacci(7));
    EXPECT_EQ(21, TddMath::fibonacci(8));
    EXPECT_EQ(34, TddMath::fibonacci(9));
    EXPECT_EQ(55, TddMath::fibonacci(10));
    EXPECT_EQ(89, TddMath::fibonacci(11));
    EXPECT_EQ(144, TddMath::fibonacci(12));
    EXPECT_EQ(233, TddMath::fibonacci(13));
    EXPECT_EQ(377, TddMath::fibonacci(14));
    EXPECT_EQ(610, TddMath::fibonacci(15));
    EXPECT_EQ(987, TddMath::fibonacci(16));
    EXPECT_EQ(1597, TddMath::fibonacci(17));
    EXPECT_EQ(2584, TddMath::fibonacci(18));
    EXPECT_EQ(4181, TddMath::fibonacci(19));
    EXPECT_EQ(6765, TddMath::fibonacci(20));
    EXPECT_EQ(10946, TddMath::fibonacci(21));
    EXPECT_EQ(17711, TddMath::fibonacci(22));
    EXPECT_EQ(28657, TddMath::fibonacci(23));
    EXPECT_EQ(46368, TddMath::fibonacci(24));
    EXPECT_EQ(75025, TddMath::fibonacci(25));
}
