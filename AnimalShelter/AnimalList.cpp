#include "AnimalList.h"
#include <stdio.h>

AnimalList::AnimalList() {
	std::string defaultAnimal = "Rusty";
	Animal rusty(defaultAnimal, 10, 4);
	animalList.push_back(rusty);

	std::string maxAnimal = "Max";
	Animal max(maxAnimal, 10, 4);
	animalList.push_back(max);
}


Animal& AnimalList::getAnimalByName(std::string& name) {
	for (Animal& animal : animalList) {
		if (animal.getMName() == name) {
			return animal;
		}
			
	}

}
std::vector<Animal>& AnimalList::getAllAnimals() {
	return animalList;
}
void AnimalList::addAnimal(std::string name, int age, int numLegs) {
	Animal newAnimal(name, age, numLegs);
	animalList.push_back(newAnimal);
}

void AnimalList::removeAnimalByName(std::string& name) {
	int index = 0;
	

	for (Animal& an : animalList) {
		
		if (an.getMName() == name) {
			animalList.erase(animalList.begin() + index);
		}
		index++;

	}
}

void AnimalList::editAnimalByName(std::string name, std::string newName, int newAge, int newNumLegs) {
	//Get Animal
	for (Animal& an : animalList) {
		if (an.getMName() == name) {
			an.setAge(newAge);
			an.setName(newName);
			an.setNumLegs(newNumLegs);
		}
	}
}

void AnimalList::printAll() {
	std::cout << " Name    -    Age - #legs\n";
	for (Animal& an : animalList) {
		printf("|%-10s|%-5u|%-5u|\n", an.getMName().c_str(), an.getAge(), an.getNumLegs());


	}
}