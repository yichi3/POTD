#include <iostream>
using namespace std;

#include "Queue.h"

int main() {
  Queue q;
  int r;

  cout<<"enqueue(3) to the queue..."<<endl;
  q.enqueue(3);
  cout<<"Queue size: "<<q.size()<<endl;

  cout<<"enqueue(2) to the queue..."<<endl;
  q.enqueue(2);
  cout<<"Queue size: "<<q.size()<<endl;

  cout<<"enqueue(1) to the queue..."<<endl;
  q.enqueue(1);
  cout<<"Queue size: "<<q.size()<<endl;

  cout << "debug use" << endl;
  cout << "head is " << q.head_ << endl;
  cout << "head->next is " << q.head_->next << endl;
  cout << "head->next->next is " << q.head_->next->next << endl;
  cout << "head->next->next->next is " << q.head_->next->next->next << endl;



  cout << "tail is " << q.tail_ << endl;


  cout<<"dequeue()"<<endl;
  r = q.dequeue();
  cout<<"Returned Value: "<<r<<", Queue size: "<<q.size()<<endl;

  cout << "tail is " << q.tail_ << endl;

  cout<<"dequeue()"<<endl;
  r = q.dequeue();
  cout<<"Returned Value: "<<r<<", Queue size: "<<q.size()<<endl;

  cout << "tail is " << q.tail_ << endl;

  cout<<"dequeue()"<<endl;
  r = q.dequeue();
  cout<<"Returned Value: "<<r<<", Queue size: "<<q.size()<<endl;

  cout << "tail is " << q.tail_ << endl;

  return 0;
}
