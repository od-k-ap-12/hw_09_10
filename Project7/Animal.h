#pragma once
#include <string>
#include <iostream>
using namespace std;
class Animal {
protected:
	string type;
	string habitat;
	string food;
public:
	Animal() = default;
	Animal(string t, string h, string f);
	string GetType();
	void SetType(string t);
	virtual void Print();
	void Input();

};

