#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : fixedPointValue(copy.fixedPointValue)
{
    std::cout << "Copy constructor called" << std::endl;
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

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->fixedPointValue = copy.fixedPointValue;
    return *this;
}
