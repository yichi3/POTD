#include <iostream>
#include <string>
#include "Derived.h"

using namespace std;

string Derived::bar(){
  return "And Ham";
}

string Derived::foo(){
  return "I will not eat them.";
}

Derived::~Derived(){}
