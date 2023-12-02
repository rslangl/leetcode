#include "solution.hpp"
#include <iostream>

auto solution::add_two_numbers(ListNode* l1, ListNode* l2) -> ListNode*
{
  ListNode* res = new ListNode(0);
  ListNode* res_base = &(*res);
  int l1_val{0}, l2_val{0}, carry_val{0}, res_val{0};

  while(l1 != nullptr && l2 != nullptr)
  {
    l1_val = (l1 != nullptr) ? l1->val : 0;
    l2_val = (l2 != nullptr) ? l2->val : 0;

    if(res == nullptr) { res = new ListNode(0); }

    res_val = l1_val + l2_val + carry_val;
    carry_val = 0;

    if(res_val > 9)
    {
      res_val = res_val - 10;
      carry_val = 1;
    }
    
    res->val = res_val;

    l1 = l1->next;
    l2 = l2->next;

    res = res->next;
  }

  return res_base;
}
