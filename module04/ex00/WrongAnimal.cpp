#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &fixed)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = fixed.type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

 void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes wrong sound" << std::endl;
}
