#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" <<std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" <<std::endl;
}

WrongCat::WrongCat(const WrongCat &fixed) : WrongAnimal::WrongAnimal(fixed)
{
	std::cout << "WrongCat copy constructor called" <<std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignement operator called" << std::endl;
	if(this != &rhs)
	{
		WrongCat::operator=(rhs);
		this->type = rhs.type;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat donesn't meaoow" << std::endl;
}