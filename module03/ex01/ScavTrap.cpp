#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	std::cout << "scav default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string n)
{
	this->name = n;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	std::cout << "scav name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "scav destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &fixed)
{
	std::cout << "scav copy construct" << std::endl;
	*this = fixed;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "scav copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		this->ad = rhs.ad;
		this->ep = rhs.ep;
		this->hp = rhs.hp;
		this->name = rhs.name;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " , causing "<< this->getAd()<< " points of damage!" << std::endl;
		this->ep -= 1;
	}
	else
		std::cout << "can't do it" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" <<std::endl;
}
