#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Contructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type(copy.getType())
{
	std::cout << "WrongAnimal Copy Contructor called" << std::endl;
}


WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal Copy Assignment Operator called" << std::endl;

	if(this != &copy)
	{
		this->type = copy.getType();
	}
	return *this;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal has no Sound specified !!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}
