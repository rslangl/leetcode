#include <catch2/catch_test_macros.hpp>

#include "solution.hpp"

TEST_CASE("Name is median-sorted-arrays", "[library]")
{
  auto const lib = library {};
  REQUIRE(lib.name == "median-sorted-arrays");
}
