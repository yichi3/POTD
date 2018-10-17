#include "potd.h"
#include <iostream>

using namespace std;

void insertSorted(Node **head, Node *insert){
  // your code here!
  // base case. if *head is NULL
  if (*head == NULL){
    *head = insert;
    insert->next_ = NULL;
    return;
  }
  // if we need to put insert at front
  if (insert->data_ < (*head)->data_){
    insert->next_ = *head;
    *head = insert;
    return;
  }
  // other cases
  Node* pre = *head;
  Node* cur = pre->next_;
  while (cur != NULL && insert->data_ > cur->data_){
    pre = cur;
    cur = cur->next_;
  }
  insert->next_ = cur;
  pre->next_ = insert;
  return;
}
