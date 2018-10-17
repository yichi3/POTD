// main.cpp

#include "Pet.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Pet p("123","fish","Garfield","John");

    cout << p.getType() << endl;
    cout << Animal(p).print() << endl;
    cout << p.getType() << endl;
    cout << p.print() << endl;
}
