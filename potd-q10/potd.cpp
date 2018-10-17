// your code here!
#include <iostream>
#include <cmath>
#include "potd.h"

using namespace std;

namespace potd{
  int *raise(int *arr){
    int length = 0;
    while (arr[length] >= 0)
      length++;
    length++;
    int *new_array = new int[length];
    for (int i = 0; i < length-2; i++){
      new_array[i] = pow(arr[i], arr[i+1]);
    }
    new_array[length-2] = arr[length-2];
    new_array[length-1] = arr[length-1];
    return new_array;
  }
}
