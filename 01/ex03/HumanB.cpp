#include "HumanB.hpp"
#include "weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	std::string weapon_type = weapon != NULL ? weapon->getType() : "no weapon";
	std::cout << name << " attacks with their " << weapon_type << std::endl;
}
