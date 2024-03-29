#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default Contructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal Copy Contructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal Copy Assingment operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}
void Animal::makeSound(void) const
{
    std::cout << "no Sound specified !!" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}
