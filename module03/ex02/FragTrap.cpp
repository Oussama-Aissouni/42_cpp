#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	std::cout << "scav default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string n)
{
	this->name = n;
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	std::cout << "scav name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fixed)
{
	std::cout << "scav copy construct" << std::endl;
	*this = fixed;
}

FragTrap & FragTrap::operator=(const FragTrap &rhs)
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

FragTrap::~FragTrap()
{
	std::cout << "scav destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target << " , causing "<< this->getAd()<< " points of damage!" << std::endl;
		this->ep -= 1;
	}
	else
		std::cout << "can't do it" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << " gimme 5 high fives" <<std::endl;
}