#include "Parrot.h"
#include <string>
#include <iostream>
using namespace std;
Parrot::Parrot(string t, string h, string f, bool tal) :Animal(t, h, f)
{
	talking = tal;
}
void Parrot::Print() {
	cout << endl << type << endl << habitat << endl << food << endl << talking << endl;
}
