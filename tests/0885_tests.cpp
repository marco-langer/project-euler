#include "euler/0885.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <vector>

TEST(E0885, f) { EXPECT_EQ(f(3403), 334); }

TEST(E0885, S)
{
    EXPECT_EQ(S(1), 45);
    EXPECT_EQ(S(5), 1'543'545'675);
   // EXPECT_EQ(S(18) % 1'123'455'689, 0);
}
