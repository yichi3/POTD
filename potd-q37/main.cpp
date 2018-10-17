#include <iostream>
#include "functions.h"
using namespace std;

int main() {
  int input;
  while (1){
    cout << "please input an int: ";
    cin >> input;
    int function5 = absolutely(input);
    cout << function5 << endl;
  }
  return 0;
}
