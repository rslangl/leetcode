cmake_minimum_required(VERSION 3.14)

project(
    two-sum
    VERSION 0.1.0
    DESCRIPTION "two sum"
    HOMEPAGE_URL "github.com/rslangl/leetcode"
    LANGUAGES CXX
)

# ---- Declare library ----

add_library(
    two-sum_lib OBJECT
    src/solution.cpp
)

target_include_directories(
    two-sum_lib
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>"
)

target_compile_features(two-sum_lib PUBLIC cxx_std_20)

# ---- Declare test ----

find_package(Catch2 REQUIRED)
include(Catch)
include(CTest)

enable_testing()

add_executable(
  two-sum_test
  src/two-sum_test.cpp
)

target_link_libraries(
    two-sum_test PRIVATE
    two-sum_lib
    Catch2::Catch2WithMain
)

target_compile_features(two-sum_test PRIVATE cxx_std_20)

catch_discover_tests(two-sum_test)
