
#include "solution.hpp"
#include <catch2/catch_test_macros.hpp>
#include <numeric>

TEST_CASE("Test numbers [2, 7, 11, 15] and target = 9") {
  std::vector<int> nums{2, 7, 11, 15};
  int target{9};

  std::vector<int> res = solution::two_sum(nums, target);

  auto const sum = std::accumulate(res.begin(), res.end(), 0);

  REQUIRE(sum == target);
}

TEST_CASE("Test numbers [3,2,4] and target = 6") {
  std::vector<int> nums{3, 2, 4};
  int target{6};

  std::vector<int> res = solution::two_sum(nums, target);

  auto const sum = std::accumulate(res.begin(), res.end(), 0);

  REQUIRE(sum == target);
}

TEST_CASE("Test numbers [3,3] and target = 6") {
  std::vector<int> nums{3, 3};
  int target{6};

  std::vector<int> res = solution::two_sum(nums, target);

  auto const sum = std::accumulate(res.begin(), res.end(), 0);

  REQUIRE(sum == target);
}
