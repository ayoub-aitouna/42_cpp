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
		~Fixed();

	private:
		int					fixedPointValue;
		static const int	fractional_bits;

	public:
		int						getRawBits(void) const;
		void					setRawBits(int const raw);
		float					toFloat(void) const;
		int						toInt(void) const;
		static Fixed&			min(Fixed& lhs, Fixed& rhs);
		static const Fixed&		min(const Fixed& lhs, const Fixed& rhs);
		static Fixed&			max(Fixed& lhs, Fixed& rhs);
		static const Fixed&		max(const Fixed& lhs, const Fixed& rhs);
		Fixed	operator=		(const Fixed &copy);
		Fixed&	operator--		();
		Fixed&	operator++		();
		Fixed	operator--		(int);
		Fixed	operator++		(int);
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);
// cmp
bool operator>(const Fixed &lhs, const Fixed &rhs);
bool operator<(const Fixed &lhs, const Fixed &rhs);
bool operator>=(const Fixed &lhs, const Fixed &rhs);
bool operator<=(const Fixed &lhs, const Fixed &rhs);
bool operator==(const Fixed &lhs, const Fixed &rhs);
bool operator!=(const Fixed &lhs, const Fixed &rhs);
//arithmetic
Fixed operator*(const Fixed &lhs, const Fixed &rhs);
Fixed operator/(const Fixed &lhs, const Fixed &rhs);
Fixed operator+(const Fixed &lhs, const Fixed &rhs);
Fixed operator-(const Fixed &lhs, const Fixed &rhs);

#endif
