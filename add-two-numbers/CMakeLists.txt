cmake_minimum_required(VERSION 3.14)

project(
    add-two-numbers
    VERSION 0.1.0
    DESCRIPTION "add two numbers"
    HOMEPAGE_URL "github.com/rslangl/leetcode"
    LANGUAGES CXX
)

# ---- Declare library ----

add_library(
    add-two-numbers_lib OBJECT
    src/solution.cpp
)

target_include_directories(
    add-two-numbers_lib
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>"
)

target_compile_features(add-two-numbers_lib PUBLIC cxx_std_20)

# ---- Declare test ----

find_package(Catch2 CONFIG REQUIRED)
include(Catch)
include(CTest)

enable_testing()

add_executable(
  add-two-numbers_test
  src/add-two-numbers_test.cpp
)

target_link_libraries(
    add-two-numbers_test PRIVATE
    add-two-numbers_lib
    Catch2::Catch2WithMain
)

target_compile_features(add-two-numbers_test PRIVATE cxx_std_20)

catch_discover_tests(add-two-numbers_test)
