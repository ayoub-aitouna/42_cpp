#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <sstream>

int main(void)
{
	ScavTrap one("NAME");
	FragTrap two("NAME");
	one.attack("banney");
	for (int i = 0; i < 7; i++)
	{
		one.beRepaired(i);
		two.highFivesGuys();
	}
	for (int i = 0; i < 7; i++)
	{
		std::ostringstream oss;
		oss << "enemy_" << i;
		one.attack(oss.str());
		two.takeDamage(10);
		oss.clear();
	}
	one.takeDamage(100);
	two.attack("one_Enemy");
	one.guardGate();
	return (0);
}
