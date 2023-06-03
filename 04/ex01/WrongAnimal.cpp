#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Default Contructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Default Destructor called" << std::endl;
}
void WrongAnimal::makeSound(void) const
{
    std::cout << "no Sound specified !!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}
