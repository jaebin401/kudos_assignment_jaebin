cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
include(GoogleTest)

add_library(StringHelper
    StringHelper.cc
)

add_executable(StringHelperTest
    StringHelper_test.cc
)

target_link_libraries(StringHelperTest
    GTest::gtest_main
    StringHelper
)

enable_testing()
gtest_discover_tests(StringHelperTest)