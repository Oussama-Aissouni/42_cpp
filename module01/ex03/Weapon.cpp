#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
	std::cout << "Weapon Constructor Called" << std::endl;
	Weapon::type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Deconstructor Called" << std::endl;
}

std::string	Weapon::getType()
{
	return type;
}

void	Weapon::setType(std::string t)
{
	Weapon::type = t;
}
