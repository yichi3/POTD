#include "TreeNode.h"
#include <algorithm>    // std::max
using namespace std;

int getHeight(TreeNode* root){
  if (root == NULL)
    return -1;
  if (root->left_ == NULL && root->right_ == NULL)
    return 0;
  return max(getHeight(root->left_), getHeight(root->right_)) + 1;
}


int getHeightBalance(TreeNode* root) {
  if (root == NULL)
    return 0;
  return getHeight(root->left_) - getHeight(root->right_);
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
