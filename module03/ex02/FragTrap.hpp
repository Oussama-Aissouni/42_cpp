#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	std::string name;
	int hp;
	int ep;
	int ad;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fixed);
	FragTrap & operator=(const FragTrap &rhs);
	~FragTrap();
	void highFivesGuys();
};

#endif