#include <string>
#include "pet.h"

using namespace std;

// Put your constructor code here!
Pet::Pet(){
  name = "Rover";
  birth_year = 2017;
  type = "dog";
  owner_name = "Cinda";
}

Pet::Pet(string in_name, int in_birth_year, string in_type, string in_owner_name){
  name = in_name;
  birth_year = in_birth_year;
  type = in_type;
  owner_name = in_owner_name;
}

void Pet::setName(string newName) {
  name = newName;
}

void Pet::setBY(int newBY) {
  birth_year = newBY;
}

void Pet::setType(string newType) {
  type = newType;
}

void Pet::setOwnerName(string newName) {
  owner_name = newName;
}

string Pet::getName() {
  return name;
}

int Pet::getBY() {
  return birth_year;
}

string Pet::getType() {
  return type;
}

string Pet::getOwnerName() {
  return owner_name;
}
