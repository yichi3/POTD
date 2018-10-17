// Your code here! :)
#include <string>
#include "student.h"

namespace potd{
  student::student(){
    name_ = "Sally";
    grade_ = 5;
  }

  string student::get_name(){
    return name_;
  }

  int student::get_grade(){
    return grade_;
  }

  void student::set_name(string name){
    name_ = name;
  }

  void student::set_grade(int grade){
    grade_ = grade;
  }

}
