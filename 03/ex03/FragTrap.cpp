
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap Default Constractur" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap Name Constractur" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destractur" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "high fives you people !!" << std::endl;
}
