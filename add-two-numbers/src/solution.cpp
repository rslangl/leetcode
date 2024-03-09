#include "solution.hpp"

#include <memory>

auto solution::add_two_numbers(ListNode* list1, ListNode* list2) -> ListNode*
{
  const int subtr = 10;
  const int limit = 9;
  //ListNode* res = new ListNode(0);
  std::unique_ptr<ListNode> res = std::make_unique<ListNode>(0);
  ListNode* res_base = &(*res);
  int list1_val{0};
  int list2_val{0};
  int carry_val{0};
  int res_val{0};

  while(list1 != nullptr && list2 != nullptr)
  {
    list1_val = (list1 != nullptr) ? list1->val : 0;
    list2_val = (list2 != nullptr) ? list2->val : 0;

    //if(res == nullptr) { res = new ListNode(0); }
    if(!res) { res = std::make_unique<ListNode>(0); }

    res_val = list1_val + list2_val + carry_val;
    carry_val = 0;

    if(res_val > limit)
    {
      res_val = res_val - subtr;
      carry_val = 1;
    }
    
    res->val = res_val;

    list1 = list1->next;
    list2 = list2->next;

    //res = res->next;
    res.reset(res->next);
    }

  return res_base;
}
