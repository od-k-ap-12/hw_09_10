#include "Elephant.h"
#include <string>
#include <iostream>
using namespace std;
Elephant::Elephant(string t, string h, string f, bool w) :Animal(t, h, f)
{
	wild = w;
}
void Elephant::Print() {
	cout << endl << type << endl << habitat << endl << food << endl << wild << endl;
}
