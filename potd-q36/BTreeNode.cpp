#include <vector>
#include "BTreeNode.h"
#include <iostream>
using namespace std;

vector<int> traverse(BTreeNode* root) {
    // your code here
    if (root == NULL)
      return vector<int>{};
    vector<int> v;
    size_t i;
    for (i = 0; i < root->elements_.size(); i++){
      if (root->is_leaf_){
        v.push_back(root->elements_[i]);
      }
      else{
        vector<int> ret = traverse(root->children_[i]);
        v.insert(v.end(), ret.begin(), ret.end());
        v.push_back(root->elements_[i]);
      }
      if (i == root->elements_.size()-1 && !root->is_leaf_){
        vector<int> ret = traverse(root->children_[i+1]);
        v.insert(v.end(), ret.begin(), ret.end());
      }
    }
    return v;
}
