#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name")
{
	this->Name = Name;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "Name Constractur Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default Destractur Called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My Name :: " << this->Name << " ClapTrap Name :: " << this->ClapTrap::Name;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}