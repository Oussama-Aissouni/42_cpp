#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal a;
	{
		Cat	moch1;
		Cat moch2(moch1);
		Dog kelb;

		moch1 = moch2;
		moch1.makeSound();
		moch2.makeSound();
		kelb.makeSound();
	}
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	{
		Dog *a = new Dog;
		Dog *b = new Dog;
		*a = *b;
		delete a;
		delete b;
	}
	{
		Animal *animals[100];
		int size = 10;
		for (int i = 0; i < size; i++)
		{
			if (i < (size / 2))
				animals[i] = new Dog;
			else
				animals[i] = new Cat;
		}
		for (int i = 0; i < size; i++)
			animals[i]->makeSound();
		for (int i = 0; i < size; i++)
			delete animals[i];
	}
	return (0);
}
