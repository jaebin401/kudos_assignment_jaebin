#include <gtest/gtest.h>
#include "StringHelper.h"

TEST(test, EmptyString) {
    EXPECT_EQ(Utils::String::Larger::toUpperCase(""), "toUpperCase(): input string is empty");
    EXPECT_EQ(Utils::String::Smaller::toLowerCase(""), "toLowerCase(): input string is empty");
    EXPECT_EQ(Utils::String::ContainDetect::contains("", ""), "contains(): text or pattern is empty");
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
    std::string small(1000, 'a');
    std::string large(1000, 'A');
    EXPECT_EQ(Utils::String::Larger::toUpperCase(small), large);
    EXPECT_EQ(Utils::String::Smaller::toLowerCase(large), small);
    EXPECT_EQ(Utils::String::ContainDetect::contains(small, "aaaaa"), 1);
    EXPECT_EQ(Utils::String::ContainDetect::contains(small, "hello"), 0);
}

