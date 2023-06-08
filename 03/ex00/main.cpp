
#include "ClapTrap.hpp"
#include <string>
#include <sstream>

int main(void)
{
	ClapTrap clap1("claper_1");
	ClapTrap clap2("claper_2");
	ClapTrap other;
	clap1.attack("claper_2");
	clap2.takeDamage(10);

	clap2.beRepaired(10);

	clap1.attack("claper_2");
	clap2.takeDamage(10);

	clap2.attack("claper_1");
	clap1.takeDamage(100);
	clap2.attack("claper_1");
	clap1.takeDamage(100);
	return (0);
}
