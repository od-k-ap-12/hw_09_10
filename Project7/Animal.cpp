#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

Animal::Animal(string t, string h, string f)
{
	type = t;
	habitat = h;
	food = f;
}
string Animal::GetType()
{
	return type;
}
void Animal::SetType(string t)
{
	type = t;
}
void Animal::Print() {
	cout << type << endl << habitat << endl << food << endl;
}
void Animal::Input() {
	cout << "Enter animal type: " << endl;
	cin >> type;
	cout << "Enter habitat: " << endl;
	cin >> habitat;
	cout << "Enter food type: " << endl;
	cin >> food;
}
