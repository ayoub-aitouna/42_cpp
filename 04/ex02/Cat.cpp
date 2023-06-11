#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy);
        brain = new Brain(*copy.brain);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meeeow Meow Meeeeow" << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return this->brain;
}
