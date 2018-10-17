#include "TreeNode.h"
#include <iostream>
using namespace std;

TreeNode*& findNode(TreeNode*& root, int key){
  if (root == NULL || root->val_ == key)
    return root;
  if (key < root->val_)
    return findNode(root->left_, key);
  else
    return findNode(root->right_, key);
}

// find the node's inorder successor
TreeNode*& findIOS(TreeNode*& node){
    if (node->left_ != NULL)
      return findIOS(node->left_);
    else
      return node;
}

// swap node1 to node2
void swapNode(TreeNode*& node1, TreeNode*& node2){
  int temp = node1->val_;
  node1->val_ = node2->val_;
  node2->val_ = temp;
}

TreeNode * deleteNode(TreeNode* root, int key) {
  // your code here
  TreeNode*& node = findNode(root, key);
  if (node == NULL)
    return root;
  // three cases
  // 1. node is leaf node
  if (node->left_ == NULL && node->right_ == NULL){
    delete node;
    node = NULL;
    return root;
  }
  // 2. node has one child
  if (node->left_ == NULL && node->right_ != NULL){
    TreeNode* temp = node;
    node = node->right_;
    delete temp;
    return root;
  }
  if (node->right_ == NULL && node->left_ != NULL){
    TreeNode* temp = node;
    node = node->left_;
    delete temp;
    return root;
  }
  // 3. node has two children
  else{
    inorderPrint(root);
    cout << endl;
    TreeNode*& prev = findIOS(node->right_);
    swapNode(node, prev);

    inorderPrint(root);
    cout << endl;

    if (prev->left_ == NULL && prev->right_ == NULL){
      delete prev;
      prev = NULL;
      inorderPrint(root);
      cout << endl;
      return root;
    }
    // 2. node has one child
    if (prev->left_ == NULL && prev->right_ != NULL){
      TreeNode* temp = prev;
      prev = prev->right_;
      delete temp;
      return root;
    }
    if (prev->right_ == NULL && prev->left_ != NULL){
      TreeNode* temp = prev;
      prev = prev->left_;
      delete temp;
      return root;
    }
    return root;
  }
}

void inorderPrint(TreeNode* node)
{
    if (!node)  return;
    inorderPrint(node->left_);
    std::cout << node->val_ << " ";
    inorderPrint(node->right_);
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
