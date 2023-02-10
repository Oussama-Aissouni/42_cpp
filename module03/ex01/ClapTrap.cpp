#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(10), ep(10), ad(0)
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hp(100), ep(50), ad(20)
{
	this->setName(name);
	std::cout << "name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &fixed)
{
	std::cout << "copy constructor called" << std::endl;
	*this = fixed;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		this->ad = rhs.ad;
		this->ep = rhs.ep;
		this->hp = rhs.hp;
		this->name = rhs.name;
	}
	return *this;
}

//getters & setters
int ClapTrap::getHp()
{
	return this->hp;
}

int ClapTrap::getAd()
{
	return this->ad;
}

int ClapTrap::getEp()
{
	return this->ep;
}

std::string ClapTrap::getName()
{
	return this->name;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHp(int hp)
{
	this->hp = hp;
}

//member functions
void ClapTrap::attack(const std::string& target)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << " , causing "<< this->getAd()<< " points of damage!" << std::endl;
		this->ep -= 1;
	}
	else
		std::cout << "can't do it" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp == 0 || ep == 0)
	{
		std::cout << "can't do it" << std::endl;
		return;
	}
	if ((this->hp - (int)amount) < 0)
	{
		hp = 0;
		return ;
	}
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)(amount + this->hp) > this->getHp() && this->ep > 0)
	{
		this->hp = 10;
		this->ep -= 1;
		return;
	}
	if (this->ep > 0 && this->hp > 0)
	{
		this->hp += amount;
		this->ep -= 1;
		return;
	}
	std::cout << "can't do it" << std::endl;
}
