#include <utility>
#include "solution.hpp"

auto solution::add_two_numbers(ListNode* l1, ListNode* l2) -> ListNode*
{
  ListNode* res;
  int l1_val, l2_val;

  // Helper lambda for getting carry and element value
  // from the sum of two numbers
  auto carry = [](const int num) -> std::pair<int, int>
  {
    std::pair<int, int> ret;
    return (num > 9) ? ret = std::make_pair(1, 10 - num) : std::make_pair(0, num);
   };

  while(l1->next != nullptr)
  {
    if(l1 != nullptr) l1_val = l1->val;
    if(l2 != nullptr) l2_val = l2->val;

    std::pair<int, int> current_element = carry(l1->val + l2->val);

    res = new ListNode(
      // Carry value
      std::get<0>(current_element), 
      // Legal element value (0 <= n <= 9)
      new ListNode(std::get<1>(current_element)));

    if(l1->next != nullptr) l1 = l1->next;
    if(l2->next != nullptr) l2 = l2->next;
  }

  return res;
}
