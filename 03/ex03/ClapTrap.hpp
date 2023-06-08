#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{

public:
	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap&  copy);
	ClapTrap &operator=(const ClapTrap&copy);
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
};
#endif
