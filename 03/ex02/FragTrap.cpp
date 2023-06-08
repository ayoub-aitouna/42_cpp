
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default Constractur" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap Name Constractur" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout << "FragTrap Copy assignment operator Called" << std::endl;
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destractur Called" << std::endl;
}


void FragTrap::attack(const std::string &target)
{
	if (this->EnergyPoint <= 0)
	{
		std::cout << "FragTrap " << this->Name << " has no EnergyPoint left, can't Attack" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->Name << " attacks " << target << " , causing " << this->AttackDamage << " points of damage!" << std::endl;
	this->EnergyPoint--;
}


void FragTrap::highFivesGuys()
{
    std::cout << "high fives you people !!" << std::endl;
}
