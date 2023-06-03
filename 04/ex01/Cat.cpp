#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}
Cat::Cat(const Cat &Cat)
{
    this->type = "Cat";
    std::cout << "Cat Copy destructor called" << std::endl;
    brain = new Brain(*Cat.getBrain());
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meeeow Meow Meeeeow" << std::endl;
}

Brain* Cat::getBrain(void) const
{
    return this->brain;
}
