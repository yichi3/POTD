#ifndef _STACK_H
#define _STACK_H

#include <cstddef>

class Stack {
  public:
    Stack();
    int size() const;
    bool isEmpty() const;
    void push(int value);
    int pop();
  private:
    struct ListNode{
      ListNode(const int& ndata);
      ListNode* next;
      int data;
    };
    ListNode* head_;
    int length_;
};

#endif
