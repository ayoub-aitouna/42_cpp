#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		~ScavTrap();
		void guardGate();

};
#endif
