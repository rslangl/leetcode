#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include "solution.hpp"

TEST_CASE("nums1 = [1,3] and nums2 = [2] should yield median = 2")
{
  std::vector<int> nums1{1,3};
  std::vector<int> nums2{2};

  double res = Solution::find_median(nums1, nums2);

  REQUIRE_THAT(res, Catch::Matchers::WithinAbs(2.0, 2.0));
}

TEST_CASE("nums1 = [1,2] and nums2 = [3,4] should yield median = 2.5")
{
  std::vector<int> nums1{1,2};
  std::vector<int> nums2{3,4};

  double res = Solution::find_median(nums1, nums2);

  REQUIRE_THAT(res, Catch::Matchers::WithinAbs(2.5, 2.5));
}

