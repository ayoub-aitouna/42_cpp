#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(Fixed &copy);
    ~Fixed();

private:
    int fixedPointValue;
    static const int fractional_bits;

public:
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &copy);
};
#endif