#include "euler/0025.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(E0025, versionA)
{
    EXPECT_EQ(e0025(2), 7);
    EXPECT_EQ(e0025(3), 12);
    EXPECT_EQ(e0025(4), 17);
    EXPECT_EQ(e0025(5), 21);
    EXPECT_EQ(e0025(6), 26);
    EXPECT_EQ(e0025(6), 26);
    EXPECT_EQ(e0025(8), 36);
    EXPECT_EQ(e0025(9), 40);
    EXPECT_EQ(e0025(10), 45);
    //EXPECT_EQ(e0025(11), 50);

    //EXPECT_EQ(e0025(1'000), 17);
}
