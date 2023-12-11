#include <iostream>
#include <vector>
#include <algorithm>
#include <fmt/core.h>
#include "solution.hpp"

auto main() -> int
{
  std::vector<int> nums1{};
  std::vector<int> nums2{};

  int num;

  fmt::print("Enter numbers for the first array (separated by space)\n");
  
  while(std::cin.get(num))
  {
    nums1.push_back(num);
  }

  fmt::print("Enter numbers for the second array (separated by space)\n");

  while(std::cin.get(num))
  {
    nums2.push_back(num);
  }

  std::sort(nums1.begin(), nums1.end());
  std::sort(nums2.begin(), nums2.end());

  double res = Solution::find_median(nums1, nums2);

  fmt::print("The median for array1 ({}) and array2 ({}) is {}\n", nums1, nums2, res);   

  return 0;
}
