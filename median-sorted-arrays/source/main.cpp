#include <vector>
#include <cxxopts.hpp>
#include <fmt/core.h>
#include <fmt/ranges.hpp>
#include "solution.hpp"

auto main(int argc, char** argv) -> int
{
  cxxopts::Options opts("Median sorted arrays");

  opts.add_options()
    ("arr1", cxxopts::value<std::vector<int>>())
    ("arr2", cxxopts::value<std::vector<int>>())
    ;

  auto params = opts.parse(argc, argv);

  std::vector<int> nums1 = params["arr1"].as<std::vector<int>>();
  std::vector<int> nums2 = params["arr2"].as<std::vector<int>>();

  auto result = solution::find_median(nums1, nums2);

  fmt::print("The median for array1 ({}) and array2 ({}) is {}\n", 
		  fmt::join(nums1, ","), 
		  fmt::join(nums2, ","),
		  result);   

  return 0;
}
