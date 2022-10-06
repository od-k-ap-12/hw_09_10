#include<iostream>
using namespace std;
class Animal {
protected:
	string type;
	string habitat;
	string food;
public:
	Animal(string t, string h, string f) :type(t), habitat(h), food(f)
	{
	}
	void Print() {
		cout << type << endl << habitat << endl << food << endl;
	}
	void Input() {
		cout << "Enter animal type: "<<endl;
		cin >> type;
		cout << "Enter habitat: " << endl;
		cin >> habitat;
		cout << "Enter food type: " << endl;
		cin >> food;
	}
};

class Elephant : public Animal {
	bool wild;
public:
	Elephant(string t, string h, string f,bool w) :Animal(t, h, f)
	{
		 wild = w;
	}
	void Print() {
		cout <<endl<< type << endl << habitat << endl << food << endl<<wild<<endl;
	}
};
class Dog : public Animal {
	bool trained;
public:
	Dog(string t, string h, string f, bool tr) :Animal(t, h, f)
	{
		trained = tr;
	}
	void Print() {
		cout << endl << type << endl << habitat << endl << food << endl << trained << endl;
	}
};
class Penguin : public Animal {
	bool swimming;
public:
	Penguin(string t, string h, string f, bool s) :Animal(t, h, f)
	{
		swimming = s;
	}
	void Print() {
		cout << endl << type << endl << habitat << endl << food << endl << swimming << endl;
	}
};
class Parrot : public Animal {
	bool talking;
public:
	Parrot(string t, string h, string f, bool tal) :Animal(t, h, f)
	{
		talking = tal;
	}
	void Print() {
		cout << endl << type << endl << habitat << endl << food << endl << talking << endl;
	}
};

int main()
{
	Parrot parrot1("parrottype", "parrothabitat", "parrotfood", 1);
	parrot1.Print();
}