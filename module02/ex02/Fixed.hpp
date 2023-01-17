#ifndef FIXED
#define FIXED

#include <iostream>
#include <math.h>

class Fixed
{
private:
	int value;
	static const int frac_bits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &fixed);
	Fixed & operator=(const Fixed &rhs);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
	
	static Fixed &min(Fixed &rhs, Fixed &lhs);
	static const Fixed &min(const Fixed &rhs, const Fixed &lhs);
	static Fixed &max(Fixed &rhs, Fixed &lhs);
	static const Fixed &max(const Fixed &rhs, const Fixed &lhs);
	
	
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
};

std::ostream& operator<<(std::ostream& output, const Fixed& obj);
bool operator==(const Fixed& lhs, const Fixed& rhs);
bool operator!=(const Fixed& lhs, const Fixed& rhs);
bool operator<(const Fixed& lhs, const Fixed& rhs);
bool operator>(const Fixed& lhs, const Fixed& rhs);
bool operator<=(const Fixed& lhs, const Fixed& rhs);
bool operator>=(const Fixed& lhs, const Fixed& rhs);

Fixed &operator+(const Fixed& lhs, const Fixed& rhs);
Fixed &operator-(const Fixed& lhs, const Fixed& rhs);
Fixed &operator*(const Fixed& lhs, const Fixed& rhs);
Fixed &operator/(const Fixed& lhs, const Fixed& rhs);

#endif