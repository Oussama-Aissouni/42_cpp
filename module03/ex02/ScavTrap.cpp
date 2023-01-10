#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "scav default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap::ClapTrap(n)
{
	std::cout << "scav name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "scav destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &fixed) : ClapTrap::ClapTrap(fixed)
{
	std::cout << "scav copy construct" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "scav copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		ClapTrap::operator=(rhs);
		this->ad = rhs.ad;
		this->ep = rhs.ep;
		this->hp = rhs.hp;
		this->name = rhs.name;
	}
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << " ScavTrap " << this->getName() << " is now in Gate keeper mode" <<std::endl;
}
