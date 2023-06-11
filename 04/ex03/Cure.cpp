#include "Cure.hpp"

Cure::Cure()
{
    this->Type = "cure";
}

Cure::Cure(const Cure &copy) : AMateria()
{
    *this = copy;
}

Cure &Cure::operator=(const Cure &copy)
{
    if (this != &copy)
        AMateria::operator=(copy);
    return *this;
}

AMateria *Cure::clone() const
{
    AMateria *CureClone = new Cure();
    *CureClone = *this;
    return (CureClone);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}