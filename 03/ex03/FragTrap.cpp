
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap Default Constractur Called" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap Name Constractur Called" << std::endl;
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

void FragTrap::highFivesGuys()
{
    std::cout << "high fives you people !!" << std::endl;
}
