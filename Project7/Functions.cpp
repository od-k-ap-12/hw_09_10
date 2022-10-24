#include "Functions.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "Animal.h"
#include "Penguin.h"
#include "Elephant.h"
#include "Dog.h"
#include "Parrot.h"
#include <list>
using namespace std;
void PrintMenu()
{
	system("cls");
	cout << "1. Add an animal" << endl
		<< "2. Add an animal in a specific position" << endl
		<< "3. Delete an animal " << endl
		<< "4. Print animals" << endl
		<< "5. Search an animal" << endl
		<< "6. Edit an animal" << endl
		<< "7. Exit" << endl;
}


void PushAnimal(list<Animal*>& animals) 
{
    AnimalMenu();
    Animal* an = nullptr;
    int choice = _getch();
    string t, h, f;
    bool c;
    switch (choice)
    {
    case '1': {
        cout << "Enter type, habitat, food, if can swim (bool)";
        cin >> t >> h >> f >> c;
        an = new Penguin(t, h, f, c);
        break;
    }
    case '2': {
        cout << "Enter type, habitat, food, if trained (bool)";
        cin >> t >> h >> f >> c;
        an = new Dog(t, h, f, c);
        break;
    }
    case '3': {
        cout << "Enter type, habitat, food, if wild (bool)";
        cin >> t >> h >> f >> c;

        an = new Elephant(t, h, f, c);
        break;
    }
    case '4': {
        cout << "Enter type, habitat, food, if can talk (bool)";
        cin >> t >> h >> f >> c;
        an = new Parrot(t, h, f, c);
        break;
    }
    default:
        cout << "Error";
        break;
        return;
    }
    animals.push_back(an);
}

void InsertAnimal(int pos,list<Animal*>& animals)
{
    string t, h, f;
    bool c;
    AnimalMenu();
    Animal* an = nullptr;
    int choice = _getch();
    switch (choice)
    {
    case '1':
        cout << "Enter type, habitat, food, if can swim (bool)";
        cin >> t >> h >> f >> c;
        an = new Penguin(t, h, f, c);
        break;
    case '2':
        cout << "Enter type, habitat, food, if trained (bool)";
        cin >> t >> h >> f >> c;
        an = new Dog(t, h, f, c);
        break;
    case '3':
        cout << "Enter type, habitat, food, if wild (bool)";
        cin >> t >> h >> f >> c;
        an = new Elephant(t, h, f, c);
        break;
    case '4':
        cout << "Enter type, habitat, food, if can talk (bool)";
        cin >> t >> h >> f >> c;
        an = new Parrot(t, h, f, c);
        break;
    default:
        cout << "Error";
        break;
        return;
    }
    auto it = animals.begin();
    for (int i = 1; i < pos; i++) {
        it++;
    }

    animals.insert(it, an);
}

void DeleteAnimal(int pos,list<Animal*>& animals)
{
    auto it = animals.begin();
    for (int i = 1; i < pos; i++) {
        it++;
    }
    animals.erase(it);
}

void EditAnimal(string t,list<Animal*>& animals)
{
    bool found = false;
    for (auto it = animals.begin(); it != animals.end(); it++) {
        if ((*it)->GetType() == t) {
            found = true;
            cout << "Found.";
            (*it)->Print();
            cout << endl;
        }
    }
    if (!found) {
        cout << "Not Found.";
    }
}

void SearchAnimal(string t, list<Animal*>& animals)
{
    bool found=false;
    for (auto it = animals.begin(); it != animals.end(); it++) {
        if ((*it)->GetType() == t) {
            found = true;
            cout << "Found.";
            (*it)->Print();
            cout << endl;
        }
    }
    if (!found) {
        cout << "Not Found.";
    }
}

void PrintAnimal(list<Animal*>& animals)
{
    for (auto it = animals.begin(); it != animals.end(); it++) {
        (*it)->Print();
    }
    cout << endl<<endl;
}

void AnimalMenu()
{
    cout << "1. Penguin" << endl
        << "2. Dog" << endl
        << "3. Elephant " << endl
        << "4. Parrot" << endl;
}

