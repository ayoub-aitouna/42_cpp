#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "Default constructor called " << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "Copy constructor called " << std::endl;
    this->Type = type;
}

std::string const &AMateria::getType() const
{
    return this->Type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "no thing !!" << std::endl;
}
