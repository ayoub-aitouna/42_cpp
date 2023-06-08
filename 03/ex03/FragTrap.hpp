#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string Name);
    FragTrap(const FragTrap& copy);
    FragTrap &operator=(const FragTrap& copy);
    ~FragTrap();

public:
    void highFivesGuys();
};
#endif
