// your code here
#include "Bar.h"
#include "Foo.h"
#include <string>

using namespace std;
using namespace potd;

Bar::Bar(string name){
  this->f_ = new Foo(name);
}

Bar::Bar(const Bar & other){
  this->f_ = new Foo(other.f_->get_name());
}

Bar::~Bar(){
  delete this->f_;
}

Bar & Bar::operator=(const Bar &other) {
    delete this->f_;
    this->f_ = new Foo(other.f_->get_name());
    return *this;
}

string Bar::get_name(){
  return this->f_->get_name();
}

/*
void helper_delete(Bar *bar){
  delete bar->f_;
  delete bar;
}

Bar * helper_create(string name){
  Bar * bar = new Bar;
  bar->f_ = new Foo(name);
  return bar;
}
*/
