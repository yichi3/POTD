#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {
    length_ = 0;
    head_ = NULL;
    tail_ = NULL;
}

Queue::~Queue(){
    while (head_ != NULL){
      Node* temp = head_->next;
      delete head_;
      head_ = temp;
    }
    head_ = NULL;
    tail_ = NULL;
}

// `int size()` - returns the number of elements in the stack (0 if empty)
int Queue::size() const {
  return length_;
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Queue::isEmpty() const {
  if (length_ == 0)
    return true;
  else
    return false;
}

// `void enqueue(int val)` - enqueue an item to the queue in O(1) time
void Queue::enqueue(int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = head_;
    if (head_ != NULL)
      head_->prev = temp;
    temp->prev = NULL;
    if (tail_ == NULL)
      tail_ = temp;;
    head_ = temp;
    length_++;
}

// `int dequeue()` - removes an item off the queue and returns the value in O(1) time
int Queue::dequeue() {
    length_--;
    if (tail_ != NULL){
      int retval = tail_->data;
      Node* temp = tail_;
      tail_ = tail_->prev;
      temp->prev = NULL;
      delete temp;
      temp = NULL;
      if (tail_ == NULL)
        head_ = NULL;
      return retval;
    }
    return -1;
}
