#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>

class ClapTrap{

	public:
		ClapTrap();
		ClapTrap(std::string Name);
		~ClapTrap();
	private:
		std::string Name;
		int HitPoint = 10;
		int EnergyPoint = 10;
		int AttackDamage = 0;
	public:
		void attack(const std::string &target);
		void takeDamage(unsinged int amount);
		void beRepaired(unsinged int amount);

};
#endif
