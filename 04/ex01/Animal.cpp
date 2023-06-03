#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default Contructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Default Destructor called" << std::endl;
}
void Animal::makeSound(void) const
{
    std::cout << "no Sound specified !!" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}
