#include "ScavTrap.hpp"

int main()
{
	ScavTrap obj1("salam");
	ScavTrap obj2(obj1);
	ScavTrap obj3;

	obj3 = obj2;
	obj1.attack("khribga");
	obj2.attack("benguerir");
	obj3.attack("kech");
	return 0;
}
