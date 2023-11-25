# ---- Declare library ----

add_library(
    solution_lib OBJECT
    solution.cpp
)

target_include_directories(
    solution_lib
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}"
)

target_compile_features(solution_lib PUBLIC cxx_std_20)

find_package(fmt REQUIRED)
target_link_libraries(solution_lib PRIVATE fmt::fmt)

# ---- Declare executable ----

add_executable(twosum_exe twosum.cpp)
add_executable(twosum::exe ALIAS twosum_exe)

set_property(TARGET twosum_exe PROPERTY OUTPUT_NAME twosum)

target_compile_features(twosum_exe PRIVATE cxx_std_20)

find_package(Catch2 REQUIRED)
target_link_libraries(twosum_exe PRIVATE solution_lib Catch2::Catch2WithMain)
