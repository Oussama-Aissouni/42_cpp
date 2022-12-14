#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <new>


class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void		announce(void);
	void		setName(std::string name);
	std::string	getName();
};

Zombie* zombieHorde( int n, std::string name );

#endif