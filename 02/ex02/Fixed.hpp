#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int initValue);
	Fixed(float initValue);
	Fixed(Fixed const &copy);
	Fixed operator=(const Fixed &value);
	~Fixed();

private:
	int fixedPointValue;
	static const int fractional_bits;

public:
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed &min(Fixed &lhs, Fixed &rhs);
	static const Fixed &min(const Fixed &lhs, const Fixed &rhs);
	static Fixed &max(Fixed &lhs, Fixed &rhs);
	static const Fixed &max(const Fixed &lhs, const Fixed &rhs);
	Fixed &operator--();
	Fixed &operator++();
	Fixed operator--(int);
	Fixed operator++(int);
	// cmp
	bool operator>(const Fixed &rhs) const;
	bool operator<(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;
	// arithmetic
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;
	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif
