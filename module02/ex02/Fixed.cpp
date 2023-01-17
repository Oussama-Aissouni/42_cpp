#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int num)
{
	this->value = num << 8;
}

Fixed::Fixed(const float num)
{
	this->value = roundf((num * (1 << 8)));
} 

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "copy constructor called" << std::endl;
	*this = fixed;
}

Fixed & Fixed::operator = (const Fixed &rhs)
{
	// std::cout << "copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << 8));
}

int	Fixed::toInt(void) const
{
	return this->value >> 8;
}

std::ostream& operator<<(std::ostream& output, const Fixed& obj)
{
	output << obj.toFloat();
	return output;
}

bool operator==(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs.getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool operator!=(const Fixed& lhs, const Fixed& rhs)
{
	return !operator==(lhs,rhs);
}

bool operator<(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool operator>(const Fixed& lhs, const Fixed& rhs)
{
	return !operator<(lhs, rhs);
}

bool operator<=(const Fixed& lhs, const Fixed& rhs)
{
	return !operator> (lhs,rhs);
}

bool operator>=(const Fixed& lhs, const Fixed& rhs)
{
	return !operator< (lhs,rhs);
}

Fixed &operator+(const Fixed& lhs, const Fixed& rhs)
{
	Fixed *res = new Fixed();

	res->setRawBits(lhs.getRawBits() + rhs.getRawBits());
	return (*res);
}

Fixed &operator-(const Fixed& lhs, const Fixed& rhs)
{
	Fixed *res = new Fixed();

	res->setRawBits(lhs.getRawBits() - rhs.getRawBits());
	return (*res);
}

Fixed &operator*(const Fixed& lhs, const Fixed& rhs)
{
	Fixed *res = new Fixed();

	res->setRawBits(((lhs.getRawBits() * rhs.getRawBits()) / (1 << 8)));
	return (*res);
}

Fixed &operator/(const Fixed& lhs, const Fixed& rhs)
{
	Fixed *res = new Fixed();

	res->setRawBits((lhs.getRawBits() * (1 << 8)) / rhs.getRawBits());
	return (*res);
}

Fixed &Fixed::operator++()
{
	int num = this->getRawBits();
	num++;
	this->setRawBits(num);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed &Fixed::operator--()
{
	int num = this->getRawBits();
	num--;
	this->setRawBits(num);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed &rhs, const Fixed &lhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed &rhs, Fixed &lhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed &rhs, const Fixed &lhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}
