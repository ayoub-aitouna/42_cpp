#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap one("ONE");
	std::cout << std::endl;

	DiamondTrap two("TWO");
	std::cout << std::endl;

	one.attack("TWO");
	std::cout << std::endl;

	two.takeDamage(20);
	std::cout << std::endl;
	
	two.beRepaired(2);
	std::cout << std::endl;
	
	two.highFivesGuys();
	std::cout << std::endl;
	
	two.attack("ONE");
	std::cout << std::endl;
	
	one.guardGate();
	std::cout << std::endl;

	one.whoAmI();
	std::cout << std::endl;
	
	return (0);
}
