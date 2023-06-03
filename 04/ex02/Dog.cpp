#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}
Dog::Dog(const Dog &dog)
{
    this->type = "Dog";
    std::cout << "Dog Copy destructor called" << std::endl;
    brain = new Brain(*dog.getBrain());
}

Dog::~Dog()
{
    std::cout << "Dog Default destructor called" << std::endl;
    delete brain;
}
void Dog::makeSound(void) const
{
    std::cout << "haw haw haw" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return this->brain;
}