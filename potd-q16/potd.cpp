#include "potd.h"
#include <iostream>
#include <string>

using namespace std;

string stringList(Node *head) {
    // your code here!
    if (head == NULL)
        return "Empty list";
    Node* cur = head->next_;
    int i = 1;
    string output = "Node 0: " + to_string(head->data_);
    while (cur != NULL){
        output = output + " -> Node " + to_string(i) + ": " + to_string(cur->data_);
        cur = cur->next_;
        i++;
    }
    return output;
}
