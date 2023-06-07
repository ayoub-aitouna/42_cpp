#include "HumanA.hpp"
#include <iostream>
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
