#ifndef WRONGANIMAL
#define WRONGANIMAL

#include "iostream"

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &fixed);
	WrongAnimal & operator=(const WrongAnimal &rhs);
	~WrongAnimal();
	void setType(std::string type);
	std::string getType(void) const;
	void makeSound() const;
};

#endif