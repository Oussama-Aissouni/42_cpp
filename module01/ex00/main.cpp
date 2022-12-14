#include "Zombie.hpp"

int main(void)
{
	Zombie *z1 = new Zombie;
	Zombie *z2;

	z1->setName("Dexter");
	z1->announce();
	z2 = newZombie("Kaboom");
	z2->announce();
	randomChump("Rotard");
	delete	z1;
	delete	z2;
}