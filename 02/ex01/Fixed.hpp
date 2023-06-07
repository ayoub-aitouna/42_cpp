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
		Fixed &operator=(const Fixed& copy);
		~Fixed();

	private:
		int					fixedPointValue;
		static const int	fractional_bits;

	public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif
