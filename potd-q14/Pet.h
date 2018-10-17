// Pet.h
#ifndef _PET_H
#define _PET_H

#include <string>
#include "Animal.h"
using namespace std;

class Pet : public Animal{
  private:
    string type_;
    string name_;
    string owner_name_;

  public:
    Pet();
    Pet(string type, string food, string name, string owner_name);
    void setFood(string food);
    void setName(string name);
    void setOwnerName(string owner_name);
    string getName();
    string getFood();
    string getOwnerName();
    string getType();
    string print();

};




#endif
