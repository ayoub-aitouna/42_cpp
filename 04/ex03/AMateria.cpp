#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type)
{
    this->Type = type;
}

std::string const &AMateria::getType() const
{
    return this->Type;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    if (this != &copy)
    {
        this->Type = copy.Type;
    }
    return *this;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

AMateria::~AMateria()
{
}

