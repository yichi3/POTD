#include "TreeNode.h"
#include <algorithm>
#include <cmath>
using namespace std;

int getHeight(TreeNode* root){
  if (root == NULL)
    return -1;
  if (root->left_ == NULL && root->right_ == NULL)
    return 0;
  return max(getHeight(root->left_), getHeight(root->right_)) + 1;
}


bool isHeightBalanced(TreeNode* root) {
  // your code here
  if (root == NULL)
    return true;
  bool retval = isHeightBalanced(root->left_);
  retval &= (fabs(getHeight(root->left_)-getHeight(root->right_)) <= 1);
  retval &= isHeightBalanced(root->right_);
  return retval;
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
