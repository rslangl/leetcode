# Parent project does not export its library target, so this CML implicitly
# depends on being added from it, i.e. the testing is done only from the build
# tree and is not feasible from an install location

project(two-sumTests LANGUAGES CXX)

# ---- Dependencies ----

find_package(Catch2 REQUIRED)
include(Catch)

# ---- Tests ----

add_executable(two-sum_test source/two-sum_test.cpp)
target_link_libraries(
    two-sum_test PRIVATE
    two-sum_lib
    Catch2::Catch2WithMain
)
target_compile_features(two-sum_test PRIVATE cxx_std_20)

catch_discover_tests(two-sum_test)

# ---- End-of-file commands ----

add_folders(Test)
