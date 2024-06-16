#include "euler/0007.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(E0007, versionA)
{
    EXPECT_EQ(e0007(6), 13);
    EXPECT_EQ(e0007(10'001), 104'743);
}
