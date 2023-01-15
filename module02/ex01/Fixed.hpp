#ifndef FIXED
#define FIXED

#include <iostream>

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
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif