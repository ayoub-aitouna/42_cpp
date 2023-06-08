#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "Default Constractur Called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "Name Constractur Called" << std::endl;
	this->Name = Name;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constractur Called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy Assignment operator Called" << std::endl;
	if (this != &copy)
	{
		this->Name = copy.Name;
		this->HitPoint = copy.HitPoint;
		this->EnergyPoint = copy.EnergyPoint;
		this->AttackDamage = copy.AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destractur Called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->EnergyPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has no EnergyPoint left, can't Attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing " << this->AttackDamage << " points of damage!" << std::endl;
	this->EnergyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has died" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " took damage , lossing " << amount << " points of hitpoint!" << std::endl;
	this->HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has no EnergyPoint left, can't repair it self" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " Repaires it self Gaining " << amount << " of HitPoint" << std::endl;
	this->HitPoint += amount;
	this->EnergyPoint--;
}
