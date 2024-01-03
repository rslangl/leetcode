# ---- Declare library ----

add_library(
    mediansortedarr_solution_lib OBJECT
    solution.cpp)

target_include_directories(
    mediansortedarr_solution_lib
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}"
)

target_compile_features(mediansortedarr_solution_lib PUBLIC cxx_std_20)

# ---- Declare executable ----

add_executable(mediansortedarr_exe median_sorted_arrays.cpp)
add_executable(mediansortedarr::exe ALIAS mediansortedarr_exe)

set_property(TARGET mediansortedarr_exe PROPERTY OUTPUT_NAME mediansortedarr)

target_compile_features(mediansortedarr_exe PRIVATE cxx_std_20)

find_package(Catch2 REQUIRED)
find_package(fmt REQUIRED)
target_link_libraries(mediansortedarr_exe PRIVATE mediansortedarr_solution_lib Catch2::Catch2WithMain fmt::fmt)
