#include "Stack.h"

Stack::Stack(){
  head_ = NULL;
  length_ = 0;
}

// constructor of ListNode

Stack::ListNode::ListNode(const int& ndata){
  data = ndata;
  next = NULL;
}

// `int size()` - returns the number of elements in the stack (0 if empty)
int Stack::size() const {
  return length_;
  return 0;
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Stack::isEmpty() const {
  if (head_ == NULL)
    return true;
  else
    return false;
}

// `void push(int val)` - pushes an item to the stack in O(1) time
void Stack::push(int value) {
  if (head_ == NULL){
    head_ = new ListNode(value);
  }
  else{
    ListNode* temp = new ListNode(value);
    temp->next = head_;
    head_ = temp;
  }
  length_++;
}

// `int pop()` - removes an item off the stack and returns the value in O(1) time
int Stack::pop() {
  ListNode* temp = head_->next;
  int value = head_->data;
  delete head_;
  head_ = temp;
  length_--;
  return value;
}
