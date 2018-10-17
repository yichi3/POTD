#include "potd.h"
#include <iostream>
using namespace std;

int main() {
  // Test 1: An empty list
  Node * head = NULL;
  cout << stringList(head) << endl;

  // Test 2: A list with exactly one node
  Node* node0 = new Node();
  node0->data_ = 100;
  node0->next_ = NULL;
  head = node0;
  cout << stringList(head) << endl;

  // Test 3: A list with more than one node
  Node* node1 = new Node();
  node1->data_ = 200;
  node1->next_ = NULL;
  node0->next_ = node1;

  Node* node2 = new Node();
  node2->data_ = 300;
  node2->next_ = NULL;
  node1->next_ = node2;
  cout << stringList(head) << endl;

  delete node0;
  delete node1;
  delete node2;

  return 0;
}
