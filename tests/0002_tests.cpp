#include "euler/0002.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>


TEST(E0002, versionA)
{
    EXPECT_EQ(e0002(10), 10);
    EXPECT_EQ(e0002(20), 10);
    EXPECT_EQ(e0002(40), 44);
    EXPECT_EQ(e0002(100), 44);
    EXPECT_EQ(e0002(200), 188);

    EXPECT_EQ(e0002(4'000'000), 4'613'732);
}
