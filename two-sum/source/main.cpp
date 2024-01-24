#include <cstdlib>
#include <vector>
#include <cxxopts.hpp>
#include <fmt/core.h>
#include "solution.hpp"

auto main(int argc, char** argv) -> int
{
  cxxopts::Options opts("Two sum");

  opts.add_options()
    ("nums", "Numbers list", cxxopts::value<std::vector<int>>())
    ("target", "Target number", cxxopts::value<int>())
    ;

  auto result = opts.parse(argc, argv);

  std::vector<int> nums = result["nums"].as<std::vector<int>>();
  int target = result["target"].as<int>();

  std::vector<int> two_sum = solution::two_sum(nums, target);

  fmt::print("[{}], [{}] matches target {}\n", two_sum[0], two_sum[1], target);

  return EXIT_SUCCESS;
}
