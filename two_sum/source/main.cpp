#include <vector>
#include <fmt/core.h>

auto main() -> int
{
  std::vector<int> nums{}
  int target;

  int input;

  fmt::print("Enter the desired target\n");
  
  std::cin.get(input);

  target = input;

  fmt::print("Enter the input numbers\n");

  while(std::cin.get(input))
  {
    nums.push_back(input);
  }

  std::vector<int> indices = Solution::two_sum(nums, target);

  fmt::print("The indices making up the sum of {} in array {} are {}\n", target, nums, indices);

  return 0;
}
