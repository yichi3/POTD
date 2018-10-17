// Your code here! :)
#include "q6.h"
#include "student.h"

using namespace potd;
void graduate(student & s){
  int g = s.get_grade();
  s.set_grade(g+1);
}
