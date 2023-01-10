#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	std::string name;
	int hp;
	int ep;
	int ad;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &fixed);
	ScavTrap & operator=(const ScavTrap &rhs);
	~ScavTrap();
	void guardGate();
};

#endif