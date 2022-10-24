#include<iostream>
using namespace std;
#include "Animal.h"
#include "Dog.h"
#include "Elephant.h"
#include "Parrot.h"
#include "Penguin.h"
#include <list>
#include <conio.h>
#include "Functions.h"


int main()
{
    list <Animal*> animals;

    bool exit = false;

    for (;;)
    {
        PrintMenu();
        string type;
        int pos;
        int choice = _getch();

        switch (choice)
        {
        case '1':
            system("cls");
            PushAnimal(animals);
            break;
        case '2':
            system("cls");
            cout << "Enter position";
            cin >> pos;
            InsertAnimal(pos,animals);
            break;
        case '3':
            system("cls");
            cout << "Enter position";
            cin >> pos;
            DeleteAnimal(pos,animals);
            break;
        case '4':
            system("cls");
            PrintAnimal(animals);
            system("pause");
            break;
        case '5':
            system("cls");
            cout << "Enter type: ";
            cin >> type;
            SearchAnimal(type,animals);
            system("pause");
            break;
        case '6':
            system("cls");
            cout << "Enter type: ";
            cin >> type;
            EditAnimal(type,animals);
            break;
        case '7':
            exit = true;
            break;

            if (exit)
            {
                break;
            }
        }
    }
    return 0;
}