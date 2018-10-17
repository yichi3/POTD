// Your code here
#include "potd.h"
#include <string>
using namespace std;

string getFortune(const string &s){
  int number = 5;
  string str[5];
  for (int i = 0; i < number; i++)
    str[i] = to_string(i*i);
  int l = s.length();
  switch (l%number){
    case 0:
      return str[0];
    case 1:
      return str[1];
    case 2:
      return str[2];
    case 3:
      return str[3];
    default:
      return str[4];
  }
}
