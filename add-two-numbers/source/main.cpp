#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <cxxopts.hpp>
#include <fmt/core.h>
#include "solution.hpp"

namespace
{
auto append(ListNode* list, const std::vector<int>& nums, const int idx) -> ListNode* 
{
  if(nums.empty())
  {
    return list;
  }
  int num = nums[idx];
  list = new ListNode(num);

  return append(list->next, nums, idx+1);
}

auto print_list(ListNode* list, std::string* out) -> std::string*
{
  if(list == nullptr)
  {
    return out;
  }

  out->append(std::to_string(list->val));

  return print_list(list->next, out);
}
} // namespace

auto main(int argc, char** argv) -> int
{
  cxxopts::Options opts("Add two numbers");

  opts.add_options()
    ("l1,list1", "List #1", cxxopts::value<std::vector<int>>())
    ("l2,list2", "List #2", cxxopts::value<std::vector<int>>())
    ;

  auto result = opts.parse(argc, argv);

  ListNode* list1 = nullptr;
  ListNode* list2 = nullptr;

  std::vector<int> nums1 = result["l1"].as<std::vector<int>>();
  std::vector<int> nums2 = result["l2"].as<std::vector<int>>();
 
  list1 = append(list1, nums1, nums1.size());
  list2 = append(list2, nums2, nums2.size());

  auto* add_nums = solution::add_two_numbers(list1, list2);
  std::string* out{};

  std::cout << "Result: " << print_list(add_nums, out) << '\n';

  return EXIT_SUCCESS;
} 
