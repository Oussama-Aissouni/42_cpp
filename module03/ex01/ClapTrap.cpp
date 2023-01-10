#include "ClapTrap.hpp"
//calonical form
ClapTrap::ClapTrap() : hp(100), ep(50), ad(20)
{
	std::cout << "clap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hp(100), ep(50), ad(20)
{
	this->setName(name);
	std::cout << "clap name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &fixed)
{
	std::cout << "copy constructor called" << std::endl;
	this->ad = fixed.ad;
	this->ep = fixed.ep;
	this->hp = fixed.hp;
	this->name = fixed.name;
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
		std::cout << "no energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->hp - (int)amount) < 0)
	{
		hp = 0;
		return ;
	}
	std::cout << "ClapTrap took damage" << std::endl;
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << "ClapTrap is repaired" << std::endl;
		this->hp += amount;
		this->ep -= 1;
	}
	else
		std::cout << "no energy left" << std::endl;
}
