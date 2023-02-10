#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fixed);
	FragTrap & operator=(const FragTrap &rhs);
	~FragTrap();
	void highFivesGuys();
	void attack(const std::string& target);
};

#endif