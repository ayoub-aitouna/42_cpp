#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}


Dog::Dog(const Dog &copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog& copy)
{
    std::cout << "Dog Copy Assignment Operator called" << std::endl;
	Animal::operator=(copy);
	return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "haw haw haw" << std::endl;
}
