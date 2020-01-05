
#include "Animal.h"

using namespace std;

Animal::Animal() {	
	m_name = "";
	m_age = 0;
	m_numLegs = 0;
}

Animal::Animal(string& name, int age, int numLegs) {
	m_name = name;
	m_age = age;
	m_numLegs = numLegs;
}		


int Animal::getAge() {
	return m_age;
}

void Animal::setAge(int age) {
	m_age = age;
}

string& Animal::getMName() {
	return m_name;
}
void Animal::setName(string& name) {
	m_name = name;
}
void Animal::print() {
	cout << "Name: " << m_name << " Age: " << m_age << " Num Legs: " << m_numLegs;
}
int Animal::getNumLegs() {
	return m_numLegs;
}
void Animal::setNumLegs(int numLegs) {
	m_numLegs = numLegs;
}


