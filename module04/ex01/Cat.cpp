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
	this->brain = new Brain();
	*this = fixed;
}

Cat & Cat::operator=(const Cat &rhs)
{
	std::cout << "cat copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		this->type = rhs.type;
		*brain = *rhs.brain;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "cats meaoow" << std::endl;
}