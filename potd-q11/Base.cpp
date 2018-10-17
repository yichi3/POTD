#include <iostream>
#include <string>
#include "Base.h"

using namespace std;

string Base::bar(){
  return "Green Eggs";
}

string Base::foo(){
  return "Sam I Am";
}

Base::~Base(){}
