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

void 	randomChump( std::string name );
Zombie*	newZombie( std::string name );
#endif