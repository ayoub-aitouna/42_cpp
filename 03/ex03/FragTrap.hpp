#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string Name);
    ~FragTrap();
    void highFivesGuys();
};
#endif
