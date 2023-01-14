#ifndef CAT
#define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &fixed);
	Cat & operator=(const Cat &rhs);
	~Cat();
	void makeSound() const;
};

#endif
