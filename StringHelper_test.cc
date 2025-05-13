#include <gtest/gtest.h>
#include "StringHelper.h"

TEST(test, EmptyString) {
    EXPECT_EQ(Utils::String::Larger::toUpperCase(""), "");
    EXPECT_EQ(Utils::String::Smaller::toLowerCase(""), "");
    EXPECT_EQ(Utils::String::ContainDetect::contains("", ""), 1);
    EXPECT_EQ(Utils::String::ContainDetect::contains("", "hello"), 0);
}

TEST(test, GeneralString) {
    EXPECT_EQ(Utils::String::Larger::toUpperCase("New Test On Here"), "NEW TEST ON HERE");
    EXPECT_EQ(Utils::String::Smaller::toLowerCase("New Test On Here"), "new test on here");
    EXPECT_EQ(Utils::String::ContainDetect::contains("New Test On Here", "On"), 1);
    EXPECT_EQ(Utils::String::ContainDetect::contains("New Test On Here", "hello"), 0);
}

TEST(test, SpecialString) {
    EXPECT_EQ(Utils::String::Larger::toUpperCase("New Test On Here!!"), "NEW TEST ON HERE!!");
    EXPECT_EQ(Utils::String::Smaller::toLowerCase("New Test On Here!!"), "new test on here!!");
    EXPECT_EQ(Utils::String::ContainDetect::contains("New Test On Here!!", "On"), 1);
    EXPECT_EQ(Utils::String::ContainDetect::contains("New Test On Here!!", "hello"), 0);
}

TEST(test, LongString) {
    EXPECT_EQ(Utils::String::Larger::toUpperCase("AbCdEfGHiJkLmNoPqRs"), "ABCDEFGHIJKLMNOPQRS");
    EXPECT_EQ(Utils::String::Smaller::toLowerCase("AbCdEfGHiJkLmNoPqRs"), "abcdefghijklmnopqrs");
    EXPECT_EQ(Utils::String::ContainDetect::contains("AbCdEfGHiJkLmNoPqRs", "Ab"), 1);
    EXPECT_EQ(Utils::String::ContainDetect::contains("AbCdEfGHiJkLmNoPqRs", "hello"), 0);
}

