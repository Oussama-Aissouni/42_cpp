#include "Zombie.hpp"

int main()
{
	Zombie	*z;

	z = zombieHorde(5, "HOPLA");
	z[4].announce();
	delete[] z;
	return 0;
}
