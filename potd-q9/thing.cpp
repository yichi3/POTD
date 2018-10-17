// Your code here!
#include "thing.h"
#include <string>
using namespace std;
using namespace potd;

Thing::Thing(int size){
  properties_ = new string[size];
  values_ = new string[size];
  props_ct_ = 0;
  props_max_ = size;
}

void Thing::_destroy(){
  delete[] properties_;
  delete[] values_;
}

void Thing::_copy(const Thing & other){
  props_ct_ = other.props_ct_;
  props_max_ = other.props_max_;
  properties_ = new string[props_max_];
  for (int i = 0; i < props_max_; i++){
    properties_[i] = other.properties_[i];
  }
  values_ = new string[props_max_];
  for (int i = 0; i < props_max_; i++){
    values_[i] = other.values_[i];
  }
}

Thing::Thing(const Thing & other){
  _copy(other);
}

Thing & Thing::operator=(const Thing & other){
  if (this != &other){
    _destroy();
    _copy(other);
  }
  return *this;
}

Thing::~Thing(){
  _destroy();
}

int Thing::set_property(string name, string value){
  int i = 0;
  for (i = 0; i < props_ct_; i++){
    if (properties_[i] == name){
      values_[i] = value;
      return i;
    }
  }
  if (i >= props_max_){
    return -1;
  }
  else{
    properties_[i] = name;
    values_[i] = value;
    props_ct_ += 1;
    return i;
  }
}

string Thing::get_property(string name){
  int flag = 0, index = 0;
  for (int i = 0; i < props_max_; i++){
    if (properties_[i] == name){
      flag = 1;
      index = i;
    }
  }
  if (flag == 1)
    return values_[index];
  else
    return "";
}
