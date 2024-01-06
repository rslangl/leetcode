cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    add-two-numbers
    VERSION 0.1.0
    DESCRIPTION "Short description"
    HOMEPAGE_URL "github.com/rslangl/leetcode"
    LANGUAGES CXX
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Declare library ----

find_package(Catch2 CONFIG REQUIRED)
find_package(fmt REQUIRED)

add_library(
    add-two-numbers_lib OBJECT
    source/solution.cpp
)

target_include_directories(
    add-two-numbers_lib ${warning_guard}
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/source>"
)

target_compile_features(add-two-numbers_lib PUBLIC cxx_std_20)

target_link_libraries(add-two-numbers_lib PRIVATE fmt::fmt Catch2::Catch2WithMain)

# ---- Declare executable ----

find_package(cxxopts CONFIG REQUIRED)

add_executable(add-two-numbers_exe source/main.cpp)
add_executable(add-two-numbers::exe ALIAS add-two-numbers_exe)

set_property(TARGET add-two-numbers_exe PROPERTY OUTPUT_NAME add-two-numbers)

target_compile_features(add-two-numbers_exe PRIVATE cxx_std_20)

target_link_libraries(add-two-numbers_exe PRIVATE add-two-numbers_lib cxxopts::cxxopts)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Developer mode ----

if(NOT add-two-numbers_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of add-two-numbers"
  )
endif()

include(cmake/dev-mode.cmake)
