#include "HuffmanNode.h"
#include "HuffmanUtils.h"
#include <string>
#include <queue>

using std::string;
using namespace std;
/**
 * binaryToString
 *
 * Write a function that takes in the root to a huffman tree
 * and a binary string.
 *
 * Remember 0s in the string mean left and 1s mean right.
 */

string binaryToString(string binaryString, HuffmanNode* huffmanTree) {
    /* TODO: Your code here */
    HuffmanNode* current = huffmanTree;
    string output;
    for (auto it = binaryString.cbegin(); it != binaryString.cend(); ++it){
      if (current->left_ != NULL || current->right_ != NULL){
        if ((*it) == '1')
          current = current->right_;
        else
          current = current->left_;
      }
      else{
        output.append(&(current->char_), 1);
        current = huffmanTree;
        --it;
      }
    }
    output.append(&(current->char_), 1);
    return output;
}

/**
 * stringToBinary
 *
 * Write a function that takes in the root to a huffman tree
 * and a character string. Return the binary representation of the string
 * using the huffman tree.
 *
 * Remember 0s in the binary string mean left and 1s mean right
 */

// helper function to find a single character in the tree
bool findchar(char c, HuffmanNode* huffmanTree, string& s){
  if (huffmanTree == NULL)
    return false;
  if (huffmanTree->char_ == c)
    return true;
  if (findchar(c, huffmanTree->left_, s.append("0")))
    return true;
  s.pop_back();
  if (findchar(c, huffmanTree->right_, s.append("1")))
    return true;
  s.pop_back();
  return false;
}

string stringToBinary(string charString, HuffmanNode* huffmanTree) {
    /* TODO: Your code here */
    string output;
    for (auto it = charString.cbegin(); it != charString.cend(); ++it)
      findchar((*it), huffmanTree, output);
    return output;
}
