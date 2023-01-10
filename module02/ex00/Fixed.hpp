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
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed & operator=(const Fixed &rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif