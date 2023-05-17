#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

private:
    std::string name;

public:
    void announce(void);
};
#endif
