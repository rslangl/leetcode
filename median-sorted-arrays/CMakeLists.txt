cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    median-sorted-arrays
    VERSION 0.1.0
    DESCRIPTION "Short description"
    HOMEPAGE_URL "http://github.com/rslangl/leetcode"
    LANGUAGES CXX
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Declare library ----

add_library(
    median-sorted-arrays_lib OBJECT
    source/solution.cpp
)

target_include_directories(
    median-sorted-arrays_lib ${warning_guard}
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/source>"
)

target_compile_features(median-sorted-arrays_lib PUBLIC cxx_std_20)

find_package(fmt REQUIRED)
target_link_libraries(median-sorted-arrays_lib PRIVATE fmt::fmt)

# ---- Declare executable ----

find_package(cxxopts CONFIG REQUIRED)

add_executable(median-sorted-arrays_exe source/main.cpp)
add_executable(median-sorted-arrays::exe ALIAS median-sorted-arrays_exe)

set_property(TARGET median-sorted-arrays_exe PROPERTY OUTPUT_NAME median-sorted-arrays)

target_compile_features(median-sorted-arrays_exe PRIVATE cxx_std_20)

target_link_libraries(median-sorted-arrays_exe PRIVATE median-sorted-arrays_lib cxxopts::cxxopts fmt::fmt)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Developer mode ----

if(NOT median-sorted-arrays_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of median-sorted-arrays"
  )
endif()

include(cmake/dev-mode.cmake)
