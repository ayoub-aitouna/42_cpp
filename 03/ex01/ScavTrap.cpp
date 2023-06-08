
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default Constractur Called" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap Name Constractur Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constractur Called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Assignment Operator Called" << std::endl;
	if (this != &copy)
		ClapTrap::operator=(copy);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destractur Called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->EnergyPoint <= 0)
	{
		std::cout << "ScavTrap " << this->Name << " has no EnergyPoint left, can't Attack" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->Name << " attacks " << target << " , causing " << this->AttackDamage << " points of damage!" << std::endl;
	this->EnergyPoint--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
