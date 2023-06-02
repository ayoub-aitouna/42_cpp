#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap{
	public:
		DiamondTrap(std::string Name);
		~DiamondTrap();
		void whoAmI();
		void attack(const std::string &target);
	private:
		std::string Name;
};
#endif
