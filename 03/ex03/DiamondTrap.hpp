#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap{
	public:
		DiamondTrap(std::string Name);
		~DiamondTrap();
	private:
		std::string Name;
};
#endif
