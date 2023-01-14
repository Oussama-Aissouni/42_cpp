#ifndef WRONGCAT
#define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &fixed);
	WrongCat & operator=(const WrongCat &rhs);
	~WrongCat();
	void makeSound() const;
};

#endif