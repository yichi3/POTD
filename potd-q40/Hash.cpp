#include "Hash.h"
#include <string>
#include <iostream>
using namespace std;

unsigned long bernstein(std::string str, int M)
{
	unsigned long b_hash = 5381;
	//Your code here
	for (char c : str){
		b_hash *= 33;
		b_hash += (unsigned int)(c);
	}
	return b_hash % M;
}

std::string reverse(std::string str)
{
    std::string output = "";
	//Your code here
	for (char c : str)
		output.insert(output.begin(), c);
	return output;
}
