#include "TreeNode.h"
#include <algorithm>


void rightRotate(TreeNode*& t) {

    // Your code here
    // before rotate and after rotate
    //              parent                   parent
    //               /                        /
    //             node1                    node2
    //           /      \                  /     \
    //        node2      A              node3   node1
    //        /   \                     /   \   /   \
    //     node3  B                    C    D  B    A
    //     /   \
    //    C    D
    
    if (root!= NULL && root->left_ != NULL){
      TreeNode* parent = root->parent_;
      TreeNode* node2 = root->left_;
      TreeNode* B = node2->right_;
      // first update the parent and node2
      if (parent != NULL)
        parent->left_ = node2;
      node2->parent_ = parent;
      // second update root and node2
      node2->right_ = root;
      root->parent_ = node2;
      // finally update B
      root->left_ = B;
      if (B != NULL)
        B->parent_ = root;
    }
    /*
    if (t != NULL && t->left_!= NULL){
      TreeNode* node1 = t;
      TreeNode* node2 = t->left_;
      TreeNode* B = node2->right_;
      // change the root pointer
      t = node2;
      t->right_ = node1;
      t->right_->left_ = B;
    }
    */
}


void leftRotate(TreeNode* root) {

    // your code here
    if (root!= NULL && root->right_ != NULL){
      TreeNode* parent = root->parent_;
      TreeNode* node2 = root->right_;
      TreeNode* B = node2->left_;
      // first update the parent and node2
      if (parent != NULL)
        parent->right_ = node2;
      node2->parent_ = parent;
      // second update root and node2
      node2->left_ = root;
      root->parent_ = node2;
      // finally update B
      root->right_ = B;
      if (B != NULL)
        B->parent_ = root;
    }
}



void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
