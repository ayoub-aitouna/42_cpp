#include "ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap() : HitPoint(10) , EnergyPoint(10), AttackDamage(0)
{
	std::cout << "Default Constractur" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : HitPoint(10) , EnergyPoint(10), AttackDamage(0)
{
	this->Name = Name;
	std::cout << "Name Constractur" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destractur" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if(this->HitPoint <= 0 || this->EnergyPoint <= 0)
	{
		std::cout << "no EnergyPoint/HitPoint left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing " << this->AttackDamage << " points of damage!" << std::endl;
	this->EnergyPoint --;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->HitPoint <= 0)
	{
		std::cout << "no EnergyPoint left" << std::endl;
		return;
	}
	this->HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->EnergyPoint <= 0)
	{
		std::cout << "no EnergyPoint left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " Repaires it self" << std::endl;
	this->HitPoint += amount;
	this->EnergyPoint --;
}


