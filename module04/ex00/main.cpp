#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();
	const WrongAnimal *wi = new WrongCat();
	const WrongCat *wc = new WrongCat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	wi->makeSound();
	meta->makeSound();
	wc->makeSound();
	delete meta;
	delete i;
	delete j;
	delete wi;
	delete wc;
	return 0;
}
