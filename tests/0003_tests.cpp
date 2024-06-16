#include "euler/0003.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(E0003, versionA)
{
    EXPECT_EQ(e0003(48), 3);
    EXPECT_EQ(e0003(88), 11);
    EXPECT_EQ(e0003(13'195), 29);
    EXPECT_EQ(e0003(600'851'475'143), 6857);
}
