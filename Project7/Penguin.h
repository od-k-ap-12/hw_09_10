#pragma once
#include <string>
#include <iostream>
#include "Animal.h"
using namespace std;

class Penguin : public Animal {
	bool swimming;
public:
	Penguin() = default;
	Penguin(string t, string h, string f, bool s);

	void Print();

};

