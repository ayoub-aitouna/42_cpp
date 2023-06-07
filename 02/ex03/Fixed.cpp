#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	this->fixedPointValue = 0;
}

Fixed::Fixed(int initVlaue)
{
	fixedPointValue = (initVlaue << fractional_bits);
}

Fixed::Fixed(float initVlaue)
{
	fixedPointValue = roundf(initVlaue * (1 << fractional_bits));
}

Fixed::Fixed(Fixed const &copy)
{
	this->fixedPointValue = copy.getRawBits();
}

Fixed::~Fixed()
{
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
	if (this != &copy)
		this->fixedPointValue = copy.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &value)
{
	os << value.toFloat();
	return (os);
}

// cmp
bool Fixed::operator>(const Fixed &rhs) const
{
	return toFloat() > rhs.toFloat();
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return toFloat() < rhs.toFloat();
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return toFloat() <= rhs.toFloat();
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return toFloat() != rhs.toFloat();
}

// arithmetic
Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	if (rhs.toFloat() == 0)
		return Fixed(0);
	return Fixed(toFloat() / rhs.toFloat());
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed &Fixed::operator--()
{
	this->fixedPointValue--;
	return *this;
}

Fixed &Fixed::operator++()
{
	this->fixedPointValue++;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits());
	this->fixedPointValue--;
	return temp;
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits());
	++this->fixedPointValue;
	return temp;
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return (lhs >= rhs ? rhs : lhs);
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs >= rhs ? rhs : lhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return (lhs <= rhs ? rhs : lhs);
}

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs <= rhs ? rhs : lhs);
}
