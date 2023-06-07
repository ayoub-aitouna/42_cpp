#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int initVlaue)
{
	fixedPointValue = (initVlaue << fractional_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float initVlaue)
{
	fixedPointValue = roundf(initVlaue * (1 << fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	float value = ((float)this->fixedPointValue) / (1 << fractional_bits);
	return value;
}

int Fixed::toInt(void) const
{
	return this->fixedPointValue / (1 << fractional_bits);
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->fixedPointValue = copy.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &value)
{
	os << value.toFloat();
	return (os);
}
