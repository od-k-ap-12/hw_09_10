#pragma once
#include <string>
#include <iostream>
#include "Animal.h"
using namespace std;
class Dog : public Animal {
	bool trained;
public:
	Dog() = default; 
	Dog(string t, string h, string f, bool tr);

	void Print();

};

