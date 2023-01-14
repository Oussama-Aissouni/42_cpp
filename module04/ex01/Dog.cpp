#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" <<std::endl;
	this->setType("Dog");
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" <<std::endl;
}

Dog::Dog(const Dog &fixed)
{
	std::cout << "Dog copy constructor called" <<std::endl;
	*this = fixed;
}

Dog & Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		this->type = rhs.type;
		this->brain = new Brain();
		for (int i = 0; i < 100; i++)
			brain->ideas[i] = rhs.brain->ideas[i];
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "dogs kaybarkiw" << std::endl;
}