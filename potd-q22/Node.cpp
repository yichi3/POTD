#include "Node.h"

using namespace std;

// helper function
// head is the current head of the list
// and insert is the node needs to be inserted
void addNode(Node*& head, int data){
  if (head == NULL){
    head = new Node();
    head->data_ = data;
    head->next_ = NULL;
    return;
  }
  int flag = 0;
  Node* pre = head;
  if (pre->data_ == data)
    flag = 1;
  Node* cur = head->next_;
  while (cur != NULL){
    if (cur->data_ == data){
      flag = 1;
    }
    pre = cur;
    cur = cur->next_;
  }
  // check whether data has appeared
  // pre is the tail of the list
  // we need to add the new node at the back of the pre
  if (flag == 1)
    return;
  else{
    Node* node = new Node();
    node->data_ = data;
    pre->next_ = node;
    node->next_ = NULL;
  }
}

// helper function
// head is the current head of the list
// if data is not in the list, return 0, else return 1
int checkNode(Node*& head, int data){
  if (head == NULL){
    return 0;
  }
  int flag = 0;
  Node* pre = head;
  if (pre->data_ == data)
    flag = 1;
  Node* cur = head->next_;
  while (cur != NULL){
    if (cur->data_ == data){
      flag = 1;
    }
    pre = cur;
    cur = cur->next_;
  }
  return flag;
}

Node *listSymmetricDifference(Node *first, Node *second) {
  Node* headA = first;
  Node* headB = second;
  Node* curA = headA;
  Node* curB = headB;
  Node* list = NULL;
  int flag = 0;
  while (curA != NULL){
    flag = checkNode(headB, curA->data_);
    if (flag == 0)
      addNode(list, curA->data_);
    curA = curA->next_;
  }
  while (curB != NULL){
    flag = checkNode(headA, curB->data_);
    if (flag == 0)
      addNode(list, curB->data_);
      curB = curB->next_;
  }
  return list;
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
