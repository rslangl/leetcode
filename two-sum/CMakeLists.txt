cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    two-sum
    VERSION 0.1.0
    DESCRIPTION "Short description"
    HOMEPAGE_URL "github.com/rslangl/leetcode"
    LANGUAGES CXX
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Declare library ----

add_library(
    two-sum_lib OBJECT
    source/solution.cpp
)

target_include_directories(
    two-sum_lib ${warning_guard}
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/source>"
)

target_compile_features(two-sum_lib PUBLIC cxx_std_20)

#target_link_libraries(two-sum_lib PRIVATE fmt::fmt)

# ---- Declare executable ----

find_package(fmt REQUIRED)
find_package(cxxopts REQUIRED)

add_executable(two-sum_exe source/main.cpp)
add_executable(two-sum::exe ALIAS two-sum_exe)

set_property(TARGET two-sum_exe PROPERTY OUTPUT_NAME two-sum)

target_compile_features(two-sum_exe PRIVATE cxx_std_20)

target_link_libraries(two-sum_exe PRIVATE two-sum_lib cxxopts::cxxopts fmt::fmt)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Developer mode ----

if(NOT two-sum_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of two-sum"
  )
endif()

include(cmake/dev-mode.cmake)
