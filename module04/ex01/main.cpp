#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	{
		Cat	moch1;
		Cat moch2(moch1);
	}
	delete j;
	delete i;
	return (0);
}
