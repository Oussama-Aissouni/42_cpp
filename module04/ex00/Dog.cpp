#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" <<std::endl;
	this->setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" <<std::endl;
}

Dog::Dog(const Dog &fixed) : Animal::Animal(fixed)
{
	std::cout << "Dog copy constructor called" <<std::endl;
}

Dog & Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		Dog::operator=(rhs);
		this->type = rhs.type;
	}
	return *this;
}

void Dog::makeSound()
{
	std::cout << "dogs barks" << std::endl;
}