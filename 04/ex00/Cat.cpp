#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meeeow Meow Meeeeow" << std::endl;
}