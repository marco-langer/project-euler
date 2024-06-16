#include "euler/0001.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>


TEST(E0001, versionA)
{
    EXPECT_EQ(e0001a(10), 23);
    EXPECT_EQ(e0001a(1000), 233'168);
}

TEST(E0001, versionB)
{
    EXPECT_EQ(e0001b(10), 23);
    EXPECT_EQ(e0001b(1000), 233'168);
}
