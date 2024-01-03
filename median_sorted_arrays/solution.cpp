#include <cmath>
#include "solution.hpp"

auto Solution::find_median(std::vector<int>& nums1, std::vector<int>& nums2) -> double
{
  std::vector<int> merged;
  merged.reserve(nums1.size() + nums2.size());
  
  double median{0};

  for(int idx = 0; idx < merged.size(); ++idx)
  {
    // Insert elements in order
    if(nums1[idx] > nums2[idx])
    {
      merged[idx] = nums2[idx];
      if(idx != merged.size())
      {
        merged[idx+1] = nums1[idx];
      }
    }
    else
    {
      merged[idx] = nums1[idx];
      if(idx != merged.size())
      {
        merged[idx+1] = nums2[idx];
      }
    }
  }

  // If even, sum and divide by two the two center elements
  if(merged.size() % 2 != 0)
  {
    int lower_bound = std::floor(merged.size() / 2);
    int upper_bound = lower_bound + 1;
    median = (merged[lower_bound] + merged[upper_bound]) / 2;
  }
  // If odd, take the center element
  else
  {
    median = merged[merged.size() / 2];
  }
  
  return median;
}
