#include "Node.h"

using namespace std;

void sortList(Node **head) {
    if ((*head)==NULL){
        return;
    }

  // your code here!
    Node* current=(*head)->next_;
    Node* b=(*head);
    for (int i=1;i<((*head)->getNumNodes());i++){
        Node* node=(*head);
        Node* prev=(*head);
        Node* next=current->next_;

        while (node!=current){
            if(node->data_>current->data_&&node==(*head)){
                Node* a=current->next_;
                *head=current;
                current->next_=node;
                b->next_=a;
                break;
            }
            else if(node->data_>current->data_&&node->next_==current){
                prev->next_=current;
                Node* temp=current->next_;
                current->next_=node;
                node->next_=temp;
                break;
            }
            else if(node->data_>current->data_){
                prev->next_=current;
                Node* temp=current->next_;
                current->next_=node;
                b->next_=temp;
                break;
            }
            prev=node;
            node=node->next_;
        }
        b=current;
        current=next;
    }

}

Node::Node() {
    numNodes++;
}

Node::Node(Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
