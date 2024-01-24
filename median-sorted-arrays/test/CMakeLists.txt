# Parent project does not export its library target, so this CML implicitly
# depends on being added from it, i.e. the testing is done only from the build
# tree and is not feasible from an install location

project(median-sorted-arraysTests LANGUAGES CXX)

# ---- Dependencies ----

find_package(Catch2 REQUIRED)
include(Catch)

# ---- Tests ----

add_executable(median-sorted-arrays_test source/median-sorted-arrays_test.cpp)
target_link_libraries(
    median-sorted-arrays_test PRIVATE
    median-sorted-arrays_lib
    Catch2::Catch2WithMain
)
target_compile_features(median-sorted-arrays_test PRIVATE cxx_std_20)

catch_discover_tests(median-sorted-arrays_test)

# ---- End-of-file commands ----

add_folders(Test)
