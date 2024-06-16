#include "euler/0010.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(E0010, versionA)
{
    EXPECT_EQ(e0010(5), 5);
    EXPECT_EQ(e0010(10), 17);
    EXPECT_EQ(e0010(20), 77);

    EXPECT_EQ(e0010(2'000'000), 142'913'828'922);
}
