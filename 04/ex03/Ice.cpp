#include "Ice.hpp"

Ice::Ice()
{
    this->Type = "ice";
}

Ice::Ice(const Ice &copy) : AMateria()
{
    *this = copy;
}

Ice &Ice::operator=(const Ice &copy)
{
    if (this != &copy)
        AMateria::operator=(copy);
    return *this;
}

AMateria *Ice::clone() const
{
    AMateria *IceClone = new Ice();
    *IceClone = *this;
    return (IceClone);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
Ice::~Ice()
{
}