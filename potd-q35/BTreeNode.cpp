#include <vector>
#include "BTreeNode.h"
#include <iostream>
using namespace std;

BTreeNode* find(BTreeNode* root, int key) {
  // Your Code Here
  size_t i;
  for (i = 0; i < root->elements_.size() && key > root->elements_[i]; i++){}
  cout << "i = " << i << endl;
  if (i < root->elements_.size() && key == root->elements_[i])
    return root;
  if (root->is_leaf_)
    return NULL;
  else {
    return find(root->children_[i], key);
  }
}
