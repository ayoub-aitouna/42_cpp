
#include "ClapTrap.hpp"
#include <string>
#include <sstream>

int main(void)
{
	ClapTrap clap("Name_1");
	clap.attack("banney");
	for(int i = 0; i < 7; i++)
	{
		clap.beRepaired(i);
	}
	for(int i = 0; i < 7; i++)
	{
		std::ostringstream oss;
		oss << "enemy_" << i;
		clap.attack(oss.str());
		oss.clear();
	}
	clap.takeDamage(100);
	return (0);
}
