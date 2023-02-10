#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int		i = 0;
	Zombie	*hordleZombie = new Zombie[N];
	while (i < N)
	{
		hordleZombie[i].setName(name);
		i++;
	}
	return hordleZombie;
}
