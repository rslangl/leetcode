#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include "solution.hpp"

auto main() -> int
{
  std::vector<int> nums1{};
  std::vector<int> nums2{};

  auto is_num = [](char c)
  { 
     return std::isdigit(static_cast<unsigned char>(c)) > 0 ? true : false;
  };

  auto get_nums = [&is_num](std::vector<int>& nums) -> void
  {
    std::string input;

    std::cin >> input;

    for(const char& c : input)
    {
      if(is_num(c))
      {
        nums.push_back(c);
      }
    }
  };

  fmt::print("Enter numbers for the first array\n");
  get_nums(nums1);

  fmt::print("Enter numbers for the second array\n");
  get_nums(nums2);

  std::sort(nums1.begin(), nums1.end());
  std::sort(nums2.begin(), nums2.end());

  double res = Solution::find_median(nums1, nums2);

  fmt::print("The median for array1 ({}) and array2 ({}) is {}\n", 
		  fmt::join(nums1, ","), 
		  fmt::join(nums2, ","),
		  res);   

  return 0;
}
