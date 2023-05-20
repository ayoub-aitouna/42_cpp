#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(int initValue);
		Fixed(float initValue);
		Fixed(Fixed &copy);
		~Fixed();

	private:
		int fixedPointValue;
		static const int fractional_bits;

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &data);
		//std::ostream &operator<<(std::ostream &os, const Fixed &copy);
		float	toFloar(void) const;
		int		toInt(void) const;
};
#endif
