#include "TreeNode.h"

TreeNode::RotationType balanceTree(TreeNode*& subroot) {
	// Your code here
  if (leftHeavy(subroot) && leftHeavy(subroot->left_))
    return TreeNode::right;
  else if (leftHeavy(subroot) && rightHeavy(subroot->left_))
    return TreeNode::leftRight;
  else if (rightHeavy(subroot) && rightHeavy(subroot->right_))
    return TreeNode::left;
  else
    return TreeNode::rightLeft;
}
