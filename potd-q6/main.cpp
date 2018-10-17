// Your code here! :)
#include <iostream>
#include <string>
#include "q6.h"
#include "student.h"

using namespace std;
using namespace potd;

int main(){
  student s;
  cout << s.get_name() << " is in grade " << s.get_grade() << "." << endl;
  graduate(s);
  cout << s.get_name() << " is in grade " << s.get_grade() << "." << endl;
  return 0;
}
