#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap ct1("9awiy");

		ct1.attack("da3if");
		std::cout << ct1.getEp() << std::endl;
		ct1.takeDamage(1);
		ct1.takeDamage(1);
		std::cout << ct1.getHp() << std::endl;
		ct1.beRepaired(4);
		std::cout << ct1.getHp() << std::endl;
		ct1.takeDamage(1);
		ct1.takeDamage(1);
		ct1.takeDamage(1);
		ct1.takeDamage(1);
		ct1.beRepaired(1);
		ct1.beRepaired(10);
		std::cout << ct1.getHp() << std::endl;
	}
	// std::cout << "***********************" << std::endl;
	// {
	// 	ClapTrap ct1("9awiy");

	// 	for (int i = 0; i < 10; i++)
	// 		ct1.attack("da3if");
	// 	std::cout << ct1.getEp() << std::endl;
	// 	std::cout << ct1.getHp() << std::endl;
	// 	ct1.attack("da3if");
	// 	ct1.beRepaired(1);
	// 	ct1.takeDamage(10);
	// 	ct1.beRepaired(1);
	// 	ct1.takeDamage(10);
	// 	ct1.takeDamage(10);
	// 	ct1.beRepaired(1);

	// }
	return 0;
}
