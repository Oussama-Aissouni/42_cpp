#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name <<"'s Deconstructor called" << std::endl;
}

void	Zombie::setName(std::string name)
{
	Zombie::name = name;
}

std::string	Zombie::getName()
{
	return name;
}

void	Zombie::announce(void)
{
	std::cout << getName() << " : BraiiiiiiinnnzzzZ..." << std::endl;
}