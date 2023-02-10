#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &fixed)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = fixed.type;
}

Animal & Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::setType(std::string type)
{
	this->type = type;
}
