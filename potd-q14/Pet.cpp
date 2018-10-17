// Pet.cpp
#include <string>
#include <iostream>
#include "Pet.h"
using namespace std;

Pet::Pet(){
  type_ = "cat";
  food_ = "fish";
  name_ = "Fluffy";
  owner_name_ = "Cinda";
}

Pet::Pet(string type, string food, string name, string owner_name){
  type_ = type;
  food_ = food;
  name_ = name;
  owner_name_ = owner_name;
}

void Pet::setFood(string food){
  food_ = food;
}

void Pet::setName(string name){
  name_ = name;
}

void Pet::setOwnerName(string owner_name){
  owner_name_ = owner_name;
}

string Pet::getName(){
  return name_;
}

string Pet::getFood(){
  return food_;
}

string Pet::getOwnerName(){
  return owner_name_;
}

string Pet::print(){
  return "My name is " + name_;
}

string Pet::getType(){
  return type_;
}
