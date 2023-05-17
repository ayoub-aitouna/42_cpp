#include "Zombie.h"

void randomChump(std::string name)
{
    Zombie m_zombie(name);
    m_zombie.announce();
}
