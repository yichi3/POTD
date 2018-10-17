/* Your code here! */
#include "epoch.h"

using namespace std;

int hours(time_t t){
  int H = t / 3600;
  return H;
}

int days(time_t t){
  int D = hours(t) / 24;
  return D;
}

int years(time_t t){
  int Y = days(t) / 365;
  return Y;
}
