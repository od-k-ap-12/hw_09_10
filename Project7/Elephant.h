#pragma once
#include <string>
#include <iostream>
#include "Animal.h"
using namespace std;
class Elephant : public Animal {
	bool wild;
public:
	Elephant() = default;
	Elephant(string t, string h, string f, bool w);

	void Print();

};
