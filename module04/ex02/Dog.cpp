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
	this->brain = new Brain();
	*this = fixed;
}

Dog & Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		this->type = rhs.type;
		*brain = *rhs.brain;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "dogs kaybarkiw" << std::endl;
}