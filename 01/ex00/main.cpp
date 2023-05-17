#include "Zombie.h"

int main()
{
    Zombie *m_zombie = newZombie("foo");
    m_zombie->announce();
    delete m_zombie;
    randomChump("boo");
    return (0);
}