#include "utils/digits.hpp"
#include "utils/fibonacci.hpp"
#include "utils/primes.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <vector>

TEST(utils, numDigits)
{
    EXPECT_EQ(ml::numDigits(4), 1);
    EXPECT_EQ(ml::numDigits(10), 2);
    EXPECT_EQ(ml::numDigits(35), 2);
    EXPECT_EQ(ml::numDigits(1000), 4);
    EXPECT_EQ(ml::numDigits(5984), 4);
}

TEST(utils, joinToNumber)
{
    EXPECT_EQ(ml::joinToNumber(std::vector{ 3, 3, 4 }), 334);
    EXPECT_EQ(ml::joinToNumber(std::vector{ 7 }), 7);
    EXPECT_EQ(ml::joinToNumber(std::vector{ 9, 0 }), 90);
    EXPECT_EQ(ml::joinToNumber(std::vector{ 0, 7, 0, 2 }), 702);
}

TEST(utils, toDigits)
{
    std::vector<int> digits;
    ml::toDigits(digits, 3403);
    EXPECT_THAT(digits, testing::ElementsAre(3, 4, 0, 3));
}

TEST(utils, fibonacciUpTo)
{
    EXPECT_THAT(ml::fibonacciUpTo(30), testing::ElementsAre(1, 1, 2, 3, 5, 8, 13, 21));
}

TEST(utils, isPrimeNumber)
{
    const std::vector<int> primes{ ml::primesUpTo(11) };
    for (int prime : primes) {
        EXPECT_TRUE(ml::isPrimeNumber(primes, prime)) << prime;
    }
}

TEST(utils, primesUpTo)
{
    EXPECT_THAT(ml::primesUpTo(11), testing::ElementsAre(2, 3, 5, 7));
    EXPECT_THAT(ml::primesUpTo(30), testing::ElementsAre(2, 3, 5, 7, 11, 13, 17, 19, 23, 29));
}