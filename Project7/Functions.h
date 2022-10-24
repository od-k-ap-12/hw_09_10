#pragma once
#include <string>
#include <iostream>
#include <list>
#include "Animal.h"
using namespace std;
void PrintMenu();
void PushAnimal(list<Animal*>& animals);
void InsertAnimal(int pos, list<Animal*>& animals);
void DeleteAnimal(int pos, list<Animal*>& animals);
void EditAnimal(string t,list<Animal*>& animals);
void SearchAnimal(string t, list<Animal*>& animals);
void PrintAnimal(list<Animal*>& animals);
void AnimalMenu();
