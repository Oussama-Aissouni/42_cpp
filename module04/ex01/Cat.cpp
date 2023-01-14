#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "cat default constructor called" <<std::endl;
	this->setType("cat");
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "cat destructor called" <<std::endl;
}

Cat::Cat(const Cat &fixed)
{
	std::cout << "cat copy constructor called" <<std::endl;
	*this = fixed;
}

Cat & Cat::operator=(const Cat &rhs)
{
	std::cout << "cat copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		this->type = rhs.type;
		this->brain = new Brain();
		for (int i = 0; i < 100; i++)
			brain->ideas[i] = rhs.brain->ideas[i];
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "cats meaoow" << std::endl;
}