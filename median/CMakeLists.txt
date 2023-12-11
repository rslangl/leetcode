cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    median
    VERSION 0.1.0
    DESCRIPTION "Find the median of two sorted arrays"
    HOMEPAGE_URL "https://github.com/rslangl/leetcode/median"
    LANGUAGES CXX
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Declare library ----

add_library(
    median_lib OBJECT
    source/solution.cpp
)

target_include_directories(
    median_lib ${warning_guard}
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/source>"
)

target_compile_features(median_lib PUBLIC cxx_std_20)

find_package(fmt REQUIRED)
target_link_libraries(median_lib PRIVATE fmt::fmt)

# ---- Declare executable ----

add_executable(median_exe source/main.cpp)
add_executable(median::exe ALIAS median_exe)

set_property(TARGET median_exe PROPERTY OUTPUT_NAME median)

target_compile_features(median_exe PRIVATE cxx_std_20)

find_package(fmt REQUIRED)
target_link_libraries(median_exe PRIVATE median_lib fmt::fmt)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Developer mode ----

if(NOT median_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of median"
  )
endif()

include(cmake/dev-mode.cmake)
