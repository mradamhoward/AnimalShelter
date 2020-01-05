#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(std::string& name, int age, int numLegs);

	int getAge();
	void setAge(int age);
	std::string& getMName();
	void setName(std::string& name);
	void print();
	int getNumLegs();
	void setNumLegs(int numLegs);

	

private:
	std::string m_name;
	int m_age, m_numLegs;
};

