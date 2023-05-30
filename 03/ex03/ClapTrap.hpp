#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{

	public:
		ClapTrap();
		ClapTrap(std::string Name);
		~ClapTrap();
	protected:
		std::string Name;
		int HitPoint;
		int EnergyPoint;
		int AttackDamage;
	public:
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setHitPoint(int HitPoint);
		void setEnergyPoint(int EnergyPoint);
		void setAttackDamage(int AttackDamage);
};
#endif
