#include "Node.h"

using namespace std;

void mergeList(Node *first, Node *second) {
  // your code here!
  // if first is NULL
  if (first == NULL){
    first = second;
    return;
  }
  if (second == NULL){
    return;
  }
  //
  Node* temp1 = first;
  Node* temp1_aft = temp1->next_;
  Node* temp2 = second;
  Node* temp2_aft = temp2->next_;
  while (temp1_aft != NULL && temp2_aft != NULL){
    // make pointer changes
    temp1->next_ = temp2;
    temp2->next_ = temp1_aft;
    // update pointer
    temp1 = temp1_aft;
    temp1_aft = temp1->next_;
    temp2 = temp2_aft;
    temp2_aft = temp2->next_;
  }

  // left three cases
  // 1. temp1 -> NULL temp2 -> temp2_aft
  // or temp1 -> NULL temp2 -> NULL
  if (temp1_aft == NULL){
    temp1->next_ = temp2;
  }
  // 2. temp1 -> temp1_aft temp2 -> NULL
  else{
    temp1->next_ = temp2;
    temp2->next_ = temp1_aft;
  }
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
