#ifndef _QUEUE_H
#define _QUEUE_H

#include <cstddef>

class Queue {
    public:
        Queue();
        int size() const;
        bool isEmpty() const;
        void enqueue(int value);
        int dequeue();
        ~Queue();
    //private:
        struct Node{
            int data;
            Node* next;
            Node* prev;
        };
        Node* head_;
        Node* tail_;
        int length_;
};

#endif
