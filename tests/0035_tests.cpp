#include "euler/0035.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(E0035, versionA)
{
    EXPECT_EQ(e0035(30), 7);
    EXPECT_EQ(e0035(100), 13);
    EXPECT_EQ(e0035(1'000'000), 55);
}
