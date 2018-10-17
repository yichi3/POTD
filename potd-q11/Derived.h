#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"
#include <string>
using namespace std;

class Derived : public Base{
  public:
    string foo();
    string bar();
    ~Derived();
};

#endif
