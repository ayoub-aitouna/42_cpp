#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Default destructor called" << std::endl;
}
void Dog::makeSound(void) const
{
    std::cout << "haw haw haw" << std::endl;
}