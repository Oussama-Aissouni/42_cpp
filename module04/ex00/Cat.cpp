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

Cat::Cat(const Cat &fixed)
{
	std::cout << "cat copy constructor called" <<std::endl;
	*this = fixed;
}

Cat & Cat::operator=(const Cat &rhs)
{
	std::cout << "cat copy assignement operator called" << std::endl;
	if(this != &rhs)
		this->type = rhs.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "cats meaoow" << std::endl;
}