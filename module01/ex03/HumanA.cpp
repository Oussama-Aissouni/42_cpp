#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	// std::cout << "HumanA Constructor Called" << std::endl;
	this->name = name;
}

HumanA::~HumanA()
{
	// std::cout << "HumanA Deconstructor Called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}