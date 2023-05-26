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
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	operator=(const Fixed &copy);
};
std::ostream &operator<<(std::ostream &os, const Fixed &value);
bool operator>(const Fixed &obj1, const Fixed &obj2);
#endif
