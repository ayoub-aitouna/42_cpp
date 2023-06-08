#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <sstream>

int main(void)
{
	ScavTrap one("NAME");
	one.attack("banney");
	one.beRepaired(10);
	one.attack("banney");
	one.takeDamage(100);

	one.guardGate();
	return (0);
}
