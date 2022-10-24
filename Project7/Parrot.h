#pragma once
#include <string>
#include <iostream>
#include "Animal.h"
using namespace std;

class Parrot : public Animal {
	bool talking;
public:
	Parrot() = default;
	Parrot(string t, string h, string f, bool tal);

	void Print();

};

