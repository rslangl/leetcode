# Parent project does not export its library target, so this CML implicitly
# depends on being added from it, i.e. the testing is done only from the build
# tree and is not feasible from an install location

project(medianTests LANGUAGES CXX)

# ---- Dependencies ----

find_package(Catch2 REQUIRED)
find_package(fmt REQUIRED)
include(Catch)

# ---- Tests ----

add_executable(median_test source/median_test.cpp)
target_link_libraries(
    median_test PRIVATE
    median_lib
    Catch2::Catch2WithMain
)
target_compile_features(median_test PRIVATE cxx_std_20)

catch_discover_tests(median_test)

# ---- End-of-file commands ----

add_folders(Test)
