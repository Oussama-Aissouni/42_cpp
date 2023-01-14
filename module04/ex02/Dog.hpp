#ifndef DOG
#define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &fixed);
	Dog & operator=(const Dog &rhs);
	~Dog();
	void makeSound() const;
};
#endif
