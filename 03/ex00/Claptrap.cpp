#include "ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap()
{
	std::cout << "Default Constractur" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Name Constractur" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destractur" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if(this->HitPoint <= 0 || this->EnergyPoint <= 0)
		return;
	std::cout << "ClapTrap " << this->Name << " attacks" << target << " , causing " << this->AttackDamage << " points of damage!" << std::endl;
	this->EnergyPoint --;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->HitPoint <= 0 || this->EnergyPoint <= 0)
		return;
	this->HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->EnergyPoint <= 0)
		return;
	std::cout << "ClapTrap " << this->Name << " Repaires it self" << std::endl;
	this->HitPoint += amount;
	this->EnergyPoint --;
}


