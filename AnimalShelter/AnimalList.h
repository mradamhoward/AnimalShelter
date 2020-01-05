#pragma once
#include "Animal.h"
#include <vector>
class AnimalList
{
public:
	AnimalList();

	Animal& getAnimalByName(std::string& name);
	std::vector<Animal>& getAllAnimals();
	void addAnimal(std::string name, int age, int numLegs);
	void editAnimalByName(std::string name, std::string newName, int newAge, int newNumLegs);
	void removeAnimalByName(std::string& name);
	void printAll();


private:
	std::vector<Animal> animalList;
};

