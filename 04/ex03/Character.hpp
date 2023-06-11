#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
public:
    Character();
    Character(std::string name);
    Character(const Character &);
    Character &operator=(const Character &);
    ~Character();

private:
    std::string name;
    AMateria *m[4];
    int size;

public:
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif