#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
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
    Animal::operator=(copy);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meeeow Meow Meeeeow" << std::endl;
}
