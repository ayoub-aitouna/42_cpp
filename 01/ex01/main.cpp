#include "Zombie.h"

int main(void)
{
    Zombie *m_zombies = zombieHorde(10, "Foo");
    for (size_t i = 0; i < 10; i++)
    {
        m_zombies[i].announce();
    }
    delete[] m_zombies;
}