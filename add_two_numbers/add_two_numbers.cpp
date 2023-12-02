#include <functional>
#include <vector>
#include <fmt/core.h>
#include <catch2/catch_test_macros.hpp>
#include "solution.hpp"

std::function<bool(std::vector<int>&, ListNode*)> is_equal = 
  [](std::vector<int>& ans, ListNode* res) -> bool
{
  bool eq;
  for(auto val : ans)
  {
    fmt::print("val = {}, res_val = {}\n", val, res->val);
    // Immediately return false when the digits does not match
    if(val != res->val)
    {
      eq = false;
      break;
    }
    
    if(res->next != nullptr)
    {
      res = res->next;
    }
    // No more digits to check, return true
    else
    {
      eq = true;
      break;
    }
  }
  return eq;
};

TEST_CASE("L1 = [2,4,3] and L2 = [5,6,4] should yield Res = [7,0,8]")
{
  ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
  ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
  ListNode* res = solution::add_two_numbers(l1, l2);

  std::vector<int> ans{7,0,8};
 
  REQUIRE(is_equal(ans, res) == true);
}

TEST_CASE("L1 = [0] and L2 = [0] should yield Res = [0]")
{
  ListNode* l1 = new ListNode(0);
  ListNode* l2 = new ListNode(0);
  ListNode* res = solution::add_two_numbers(l1, l2);

  std::vector<int> ans{0};

  REQUIRE(is_equal(ans, res) == true);
}

TEST_CASE("L1 = [9,9,9,9,9,9,9] and L2 = [9,9,9,9] should yield Res = [8,9,9,9,0,0,0,1]")
{
  ListNode* l1 = new ListNode(9,new ListNode(9,new ListNode(9,new ListNode(9,new ListNode(9,
    new ListNode(9,new ListNode(9)))))));
  ListNode* l2 = new ListNode(9,new ListNode(9,new ListNode(9,new ListNode(9))));
  ListNode* res = solution::add_two_numbers(l1, l2);

  std::vector<int> ans{8,9,9,9,0,0,0,1};

  REQUIRE(is_equal(ans, res) == true);
}
