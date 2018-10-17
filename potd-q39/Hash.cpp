#include <vector>
#include <string>
#include <iostream>
#include "Hash.h"

using namespace std;

int hashFunction(string s, int M) {
   // Your Code Here
   //hash function to sum up the ASCII characters of the letters of the string
   int sum = 0;
   for (auto it = s.begin(); it != s.end(); it++){
     sum += *(it);
   }
   return sum % M;
 }

int countCollisions (int M, vector<string> inputs) {
	int collisions = 0;
	// Your Code Here
  vector<int> check;
  check.assign(M, 0);
  for (string s : inputs){
    int hash = hashFunction(s, M);
    if (check[hash] == 0)
      check[hash] = 1;
    else
      collisions += 1;
  }
	return collisions;
}
