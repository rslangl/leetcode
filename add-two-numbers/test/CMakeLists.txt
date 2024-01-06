# Parent project does not export its library target, so this CML implicitly
# depends on being added from it, i.e. the testing is done only from the build
# tree and is not feasible from an install location

project(add-two-numbersTests LANGUAGES CXX)

# ---- Dependencies ----

find_package(Catch2 REQUIRED)
include(Catch)

find_package(fmt CONFIG REQUIRED)
#include(fmt)

# ---- Tests ----

add_executable(add-two-numbers_test source/add-two-numbers_test.cpp)
target_link_libraries(
    add-two-numbers_test PRIVATE
    add-two-numbers_lib
    Catch2::Catch2WithMain
    fmt::fmt
)
target_compile_features(add-two-numbers_test PRIVATE cxx_std_20)

catch_discover_tests(add-two-numbers_test)

# ---- End-of-file commands ----

add_folders(Test)
