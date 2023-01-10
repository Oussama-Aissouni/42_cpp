#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &fixed);
	Cat & operator=(const Cat &rhs);
	~Cat();
	void makeSound();
};

#endif
