# ---- Declare library ----

add_library(
    addtwonums_solution_lib OBJECT
    solution.cpp
)

target_include_directories(
    addtwonums_solution_lib
    PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}"
)

target_compile_features(addtwonums_solution_lib PUBLIC cxx_std_20)

find_package(fmt REQUIRED)
target_link_libraries(addtwonums_solution_lib PRIVATE fmt::fmt)

# ---- Declare executable ----

add_executable(addtwonums_exe add_two_numbers.cpp)
add_executable(addtwonums::exe ALIAS addtwonums_exe)

set_property(TARGET addtwonums_exe PROPERTY OUTPUT_NAME addtwonums)

target_compile_features(addtwonums_exe PRIVATE cxx_std_20)

find_package(Catch2 REQUIRED)
target_link_libraries(addtwonums_exe PRIVATE addtwonums_solution_lib Catch2::Catch2WithMain)
