#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "HumanB Constructor Called" << std::endl;
	this->name = name;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Deconstructor Called" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}


void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}