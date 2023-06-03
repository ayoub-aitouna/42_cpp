#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Default Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow Meeeow Meow Meeeeow" << std::endl;
}