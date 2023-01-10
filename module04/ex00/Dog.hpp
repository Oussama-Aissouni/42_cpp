#ifndef DOG
#define DOG

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &fixed);
	Dog & operator=(const Dog &rhs);
	~Dog();
	virtual  void makeSound();
};
#endif

