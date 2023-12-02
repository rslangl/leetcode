#pragma once

struct ListNode
{
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  explicit ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class solution
{
  public:
    static auto add_two_numbers(ListNode* l1, ListNode* l2) -> ListNode*;
};
