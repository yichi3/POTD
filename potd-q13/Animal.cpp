// Animal.cpp
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Animal::Animal(){
  type_ = "cat";
  food_ = "fish";
}

Animal::Animal(string type, string food){
  type_ = type;
  food_ = food;
}

string Animal::getType(){
  return type_;
}

string Animal::getFood(){
  return food_;
}

void Animal::setType(string type){
  type_ = type;
}

void Animal::setFood(string food){
  food_ = food;
}

string Animal::print(){
  string type = type_;
  return "I am a " + type;
}
