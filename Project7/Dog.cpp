#include "Dog.h"
#include <string>
#include <iostream>
using namespace std;
Dog::Dog(string t, string h, string f, bool tr) :Animal(t, h, f)
{
	trained = tr;
}
void Dog::Print() {
	cout << endl << type << endl << habitat << endl << food << endl << trained << endl;
}
