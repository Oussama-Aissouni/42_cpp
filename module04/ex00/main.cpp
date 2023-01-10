#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// Animal	a;
	// Cat		b;
	// Dog		c;

	// a.makeSound();
	// b.makeSound();
	// c.makeSound();
	// std::cout << a.getType() << std::endl;
	// std::cout << b.getType() << std::endl;
	// std::cout << c.getType() << std::endl;

	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	return 0;
}
