#include "Penguin.h"
#include <string>
#include <iostream>
using namespace std;
Penguin::Penguin(string t, string h, string f, bool s) :Animal(t, h, f)
{
	swimming = s;
}
void Penguin::Print() {
	cout << endl << type << endl << habitat << endl << food << endl << swimming << endl;
}
