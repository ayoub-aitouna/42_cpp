#include "Character.hpp"

Character::Character()
{
    this->size = 0;
}

Character::Character(std::string name)
{
    this->name = name;
    this->size = 0;
}

Character::Character(const Character &copy)
{
    *this = copy;
}

Character &Character::operator=(const Character &copy)
{
    if (this != &copy)
    {
        for (size_t i = 0; i < 4; i++)  
            this->m[i] = copy.m[i]->clone();
        this->size = copy.size;
    }
    return *this;
}

std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    if (size < 4 && size >= 0)
        this->m[size++] = m;
}

void Character::unequip(int idx)
{
    // remove at idx
    if (idx < 0 || idx >= 4)
        return;
    for (size_t i = idx; i < 3; i++)
    {
        m[i] = m[i + 1];
    }
    m[3] = NULL;
    size--;
}

void Character::use(int idx, ICharacter &target)
{
    if (size > idx && idx >= 0)
        m[idx]->use(target);
}

Character::~Character()
{
}
