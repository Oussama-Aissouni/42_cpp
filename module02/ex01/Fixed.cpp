#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int num)
{
	
}

Fixed::Fixed(const float num)
{

}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "copy constructor called" << std::endl;
	this->value = fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed &rhs)
{
	std::cout << "operator= called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}