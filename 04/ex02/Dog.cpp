#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy);
        this->brain = new Brain(*copy.brain);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete brain;
}
void Dog::makeSound(void) const
{
    std::cout << "haw haw haw" << std::endl;
}

Brain *Dog::getBrain(void) const
{
    return this->brain;
}