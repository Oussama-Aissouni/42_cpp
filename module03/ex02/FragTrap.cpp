#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "scav default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap::ClapTrap(n)
{
	std::cout << "scav name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fixed) : ClapTrap::ClapTrap(fixed)
{
	std::cout << "scav copy construct" << std::endl;
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

void FragTrap::highFivesGuys()
{
	std::cout << " gimme 5 high fives" <<std::endl;
}