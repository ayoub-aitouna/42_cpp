#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int initVlaue)
{
	fixedPointValue = 0;
	std::cout << "Int constructor called" << std::endl;
	(void) initVlaue;

}
int getExponent(float value)
{
	int *intPtr = (int *) &value;

	int intval = *intPtr;
	int expo =  (intval >> 23) & 0xFF;
	return (expo - 127);
}

Fixed::Fixed(float initVlaue)
{
	fixedPointValue = 0;
	std::cout << "Float constructor called expo is : " << getExponent(initVlaue) << std::endl;

}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointValue = copy.fixedPointValue;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointValue);
}
void Fixed::setRawBits(int const raw)
{
	fixedPointValue = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

/*
   Fixed &Fixed::operator=(const Fixed &copy)
   {
   std::cout << "Copy assignment operator called" << std::endl;
   if (this != &copy)
   this->fixedPointValue = copy.fixedPointValue;
   return *this;
   }
   */
