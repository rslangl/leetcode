#include "solution.hpp"
//#include <gsl/gsl_assert>

auto solution::two_sum(const std::vector<int>& nums, int target) -> std::vector<int>
{
  bool success{false};
  std::vector<int> result(2);

  //Expects(target > 0);

  for(unsigned int i = 0; i < nums.size(); ++i)
  {
    if(success)
    {
      break;
    }

    for(unsigned int j = 0; j < nums.size(); ++j)
    {
      if(nums[i] + nums[j] == target)
      {
        if(i == j)
        {
          continue;
        }
        else
        {
          result.push_back(nums[i]);
          result.push_back(nums[j]);
          success = true;
        }
      }
    }
  }

  //Ensures(result.size() == 2);

  return result;
}
