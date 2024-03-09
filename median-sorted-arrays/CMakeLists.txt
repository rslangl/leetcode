cmake_minimum_required(VERSION 3.14)

project(
    median-sorted-arrays
    VERSION 0.1.0
    DESCRIPTION "median sorted arrays"
    HOMEPAGE_URL "http://github.com/rslangl/leetcode"
    LANGUAGES CXX
)

# ---- Declare library ----

add_library(
    median-sorted-arrays_lib OBJECT
    src/solution.cpp
)

target_include_directories(
    median-sorted-arrays_lib
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>"
)

target_compile_features(median-sorted-arrays_lib PUBLIC cxx_std_20)

# ---- Declare test ----

find_package(Catch2 CONFIG REQUIRED)
include(Catch)
include(CTest)

enable_testing()

add_executable(
  median-sorted-arrays_test
  src/median-sorted-arrays_test.cpp
)

target_link_libraries(
    median-sorted-arrays_test PRIVATE
    median-sorted-arrays_lib
    Catch2::Catch2WithMain
)

target_compile_features(median-sorted-arrays_test PRIVATE cxx_std_20)

catch_discover_tests(median-sorted-arrays_test)
