#include "ScavTrap.hpp"

int main()
{
	{
		ScavTrap obj("9awiy");
		ScavTrap obj1("9awiy1");

		obj.takeDamage(10);
		obj.attack("da3if");
		std::cout << "hp = " << obj.getHp() << " ep = " << obj.getEp() << std::endl;
		obj.takeDamage(100);
		std::cout << "hp = " << obj.getHp() << " ep = " << obj.getEp() << std::endl;
		obj1.guardGate();
	}
	{
		ScavTrap obj("9awiy");
		ScavTrap obj1(obj);

		std::cout << "hp = " << obj1.getHp() << " ep = " << obj1.getEp() << " ad = " << obj1.getAd()<< std::endl;
		obj1.guardGate();
	}
	{
		ScavTrap obj("9awiy");
		ScavTrap obj1;

		obj1 = obj;
		std::cout << "hp = " << obj1.getHp() << " ep = " << obj1.getEp() << " ad = " << obj1.getAd()<< std::endl;
		obj1.guardGate();
	}
	return 0;
}
