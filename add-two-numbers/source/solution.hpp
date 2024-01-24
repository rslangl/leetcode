#pragma once

#ifndef SOLUTION_HPP
#define SOLUTION_HPP

struct ListNode
{
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  explicit ListNode(int val) : val(val), next(nullptr) {}
  ListNode(int val, ListNode* next) : val(val), next(next) {}
};

class solution
{
public:
  static auto add_two_numbers(ListNode* list1, ListNode* list2) -> ListNode*;
};

#endif
