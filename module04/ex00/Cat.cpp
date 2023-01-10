#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "cat default constructor called" <<std::endl;
	this->setType("cat");
}

Cat::~Cat()
{
	std::cout << "cat destructor called" <<std::endl;
}

Cat::Cat(const Cat &fixed) : Animal::Animal(fixed)
{
	std::cout << "cat copy constructor called" <<std::endl;
}

Cat & Cat::operator=(const Cat &rhs)
{
	std::cout << "cat copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		Cat::operator=(rhs);
		this->type = rhs.type;
	}
	return *this;
}

void Cat::makeSound()
{
	std::cout << "cats meaoow" << std::endl;
}