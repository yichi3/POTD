#include "TreeNode.h"
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int findHeight(TreeNode* root){
  if (root == NULL)
    return -1;
  return max(findHeight(root->left_), findHeight(root->right_)) + 1;
}

bool isBalanced(TreeNode* root){
  if (root == NULL)
    return true;
  root->balance_ = findHeight(root->right_) - findHeight(root->left_);
  if (fabs(root->balance_) <= 1)
    return true;
  return false;
}

void findLastUnbalanced(stack<TreeNode*>& stack, queue<TreeNode*>& queue){
  if (queue.empty())
    return;
  TreeNode* temp = queue.front();
  queue.pop();
  if (!isBalanced(temp))
    stack.push(temp);
  if (temp->left_ != NULL)
    queue.push(temp->left_);
  if (temp->right_ != NULL)
    queue.push(temp->right_);
  findLastUnbalanced(stack, queue);
}

TreeNode* findLastUnbalanced(TreeNode* root) {
  // your code here
  // BFS to store the unbalanced node to the stack
  if (root == NULL)
    return NULL;
  stack<TreeNode*> stack;
  queue<TreeNode*> queue;
  // initialize stack
  if (!isBalanced(root))
    stack.push(root);
  // initialize queue
  if (root->left_ != NULL)
    queue.push(root->left_);
  if (root->right_ != NULL)
    queue.push(root->right_);
  findLastUnbalanced(stack, queue);
  if (stack.empty())
    return NULL;
  return stack.top();

}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
