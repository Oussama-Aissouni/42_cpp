#ifndef ANIMAL
#define ANIMAL

#include "iostream"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &fixed);
	Animal & operator=(const Animal &rhs);
	~Animal();
	void setType(std::string type);
	std::string getType(void) const;
	virtual void makeSound() const;
};


#endif