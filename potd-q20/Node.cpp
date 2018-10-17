#include "Node.h"

using namespace std;

// helper function
// head is the current head of the list
// and insert is the node needs to be inserted
void addNode(Node*& head, Node* insert){
  if (head == NULL){
    head = new Node(*insert);
    head->next_ = NULL;
    return;
  }
  int flag = 0;
  Node* pre = head;
  if (pre->data_ == insert->data_)
    flag = 1;
  Node* cur = head->next_;
  while (cur != NULL){
    if (cur->data_ == insert->data_){
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
    Node* node = new Node(*insert);
    pre->next_ = node;
    node->next_ = NULL;
  }
}



Node *listUnion(Node *first, Node *second) {
  Node* list = NULL;
  // your code here
  Node* curA = first;
  while (curA != NULL){
    addNode(list, curA);
    curA = curA->next_;
  }
  Node* curB = second;
  while (curB != NULL){
    addNode(list, curB);
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
