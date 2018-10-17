#include "Node.h"
#include <iostream>
using namespace std;

// helper function that swap two consecutive element
// before swap : ppre -> pre -> cur -> aft
// after swap :  ppre -> cur -> pre -> aft
void swap(Node* ppre, Node* pre, Node* cur){
  if (pre->data_ <= cur->data_)
    return;
  Node* temp = pre;
  ppre->next_ = cur;
  temp->next_ = cur->next_;
  cur->next_ = temp;
  pre = cur;
  cur = temp;
}

void sortList(Node **head) {
  // case 1: if linked list has no element or only one element
  if (*head == NULL || (*head)->next_ == NULL)
    return;

  // case 2: if linkedlist has 2 element
  if ((*head)->next_->next_ == NULL){
    if ((*head)->data_ > (*head)->next_->data_){
      Node* temp = (*head)->next_;
      (*head)->next_ = NULL;
      temp->next_ = *head;
      (*head) = temp;
      return;
    }
  }

  // other cases

  for (int i = 0; i < Node::getNumNodes(); i++){
    cout << "reach here" << endl;
    Node* ppre = (*head);
    Node* pre = (*head)->next_;
    Node* cur = pre->next_;
    while (cur != NULL){
      swap(ppre, pre, cur);
    }
    ppre = pre;
    pre = cur;
    cur = cur->next_;
  }



/*


  // other cases
  Node* pre = *head;
  Node* cur = *head;
  Node* next = (*head)->next_;
  Node* aft = next->next_;
  // iterator
  Node* it = *head;
  int min = (*head)->data_;
  // in each cycle, we find the smallest element and insert it and the front
  while (cur != NULL){

  }
*/
}

Node::Node() {
    numNodes++;
}

Node::Node(Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
