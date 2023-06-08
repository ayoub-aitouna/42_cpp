#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name")
{
	std::cout << "DiamondTrap Name Constractur Called" << std::endl;
	this->Name = Name;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constractur Called" << std::endl;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap Copy Constractur Called" << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap Copy Assignment operator Called" << std::endl;
	if (this != &copy)
	{
		this->Name = copy.Name;
		ClapTrap::operator=(copy);
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destractur Called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name is : " << this->Name << " & ClapTrap Name is : " << this->ClapTrap::Name<< std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}