#include "gmock/gmock.h"
#include "gtest/gtest.h"

int main(int argc, char** argv)
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(THIS_IS_A_TEST,TEST)
{
    ASSERT_EQ(4, 2 + 2);
}