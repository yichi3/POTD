// Animal.h
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>

using namespace std;

class Animal{
  public:
    Animal();
    Animal(string type, string food);
    string food_;
    string getType();
    void setType(string type);
    string getFood();
    void setFood(string food);
    virtual string print();
  private:
    string type_;

};

#endif
