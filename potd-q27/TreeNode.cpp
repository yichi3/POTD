#include "TreeNode.h"

#include <cstddef>
#include <iostream>
#include <cmath>
using namespace std;

TreeNode::TreeNode() : left_(NULL), right_(NULL) { }

int helpergetHeight(TreeNode* node){
  if (node == NULL)
    return -1;
  if (node->left_ == NULL && node->right_ == NULL)
    return 0;
  return max(helpergetHeight(node->left_), helpergetHeight(node->right_)) + 1;
}

int TreeNode::getHeight() {
  return helpergetHeight(this);
}
