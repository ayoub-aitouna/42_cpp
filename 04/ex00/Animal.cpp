#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Default Contructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal Copy Contructor called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal Copy Assingment operator called" << std::endl;
	if(this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor called" << std::endl;
}
void Animal::makeSound(void) const
{
	std::cout << "no Sound specified !!" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}
