#include "pch.h"
#include "gtest/gtest.h"
#include "../Libraries/utils.h"

TEST(ContainsNoAlphaNumericTest, NoNAlphaNumericChars) {
    auto str = "abcdABCD45";
  EXPECT_FALSE(Libraries::Utils::ContainsNonAlphaNumbericChars(str));
}

TEST(ContainsNoAlphaNumericTest, OnlyAlphaNumericChars) {
    auto str = "abcdABCD45<";
    EXPECT_TRUE(Libraries::Utils::ContainsNonAlphaNumbericChars(str));
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}