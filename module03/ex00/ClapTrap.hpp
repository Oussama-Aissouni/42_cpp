#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>

class ClapTrap
{
	private :
		std::string name;
		int hp;
		int ep;
		int ad;
	public :
		//calonical form
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &fixed);
		ClapTrap & operator=(const ClapTrap &rhs);
		~ClapTrap();
		//getters & setters
		int getHp();
		int getEp();
		int getAd();
		std::string getName();
		void setHp(int hp);
		void setName(std::string name);
		//member functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif