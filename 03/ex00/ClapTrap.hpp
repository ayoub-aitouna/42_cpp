#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

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
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};
#endif
