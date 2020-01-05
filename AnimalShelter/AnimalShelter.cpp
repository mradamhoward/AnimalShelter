    // AnimalShelter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include <vector>



#include "AnimalList.h"

using namespace std;


void printMenu() {
    cout << "---------------------------------\n";
    cout << "1: List All\n" << "2: Add Animal\n" << "3: Remove Animal\n" << "4: Quit\n" << "5: Edit Animal\n";
    cout << "---------------------------------\n";

}

int main()
{
    AnimalList anList;

    anList.addAnimal("Flex", 0, 4);
    anList.addAnimal("Misty", 3, 4);
    anList.addAnimal("Snowy", 0, 4);
    anList.addAnimal("Parrot", 0, 2);

    anList.printAll();


    bool quit = false;

    while (!quit) {
        printMenu();

        int choice;

        cin >> choice;

        switch (choice) {

        case 1:
            anList.printAll();
            break;

        case 2:
        {
            int ind = 0;
            string name = "";
            int age = 0;
            int numLegs = 0;
            while (ind <= 2) {
                if (ind == 0) {
                    cout << "Name: ";
                    cin >> name;
                }
                else if (ind == 1) {
                    cout << "Age: ";
                    cin >> age;
                }
                else if (ind == 2) {
                    cout << "numLegs";
                    cin >> numLegs;
                }
                else {
                    break;
                }
                ind++;
            }
            anList.addAnimal(name, age, numLegs);
            break;
        }

        case 3: {
            string nameRemove;
            cout << "Name of animal to remove: ";
            cin >> nameRemove;
            anList.removeAnimalByName(nameRemove);
            break;
        }

        case 4:
            quit = true;
            break;

        case 5: {
            int index = 0;
            string currentName;
            string newName;
            int newAge;
            int newNumLegs;

            try {
                while (index <= 3) {
                    if (index == 0) {
                        cout << "Name of animal to edit: ";
                        cin >> currentName;
                    }
                    else if (index == 1) {
                        cout << "New name: ";
                        cin >> newName;
                    }
                    else if (index == 2) {
                        cout << "New age: ";
                        cin >> newAge;
                    }
                    else if (index == 3) {
                        cout << "New number of legs: ";
                        cin >> newNumLegs;
                    }
                    index++;
                }
            }
            catch (std::exception & e) {
                cout << "Error editing animal";
            }
            
            anList.editAnimalByName(currentName, newName, newAge, newNumLegs);
            break;
        }
            
            
            

        
        
        }
       


    }
    

   
    std::cout << "Bye!\n";
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
