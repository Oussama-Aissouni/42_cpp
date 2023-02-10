#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &fixed);
	ScavTrap & operator=(const ScavTrap &rhs);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);
};

#endif