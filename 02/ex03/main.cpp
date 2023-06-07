#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(0, 0);
	Point b(0, 2);
	Point c(2, 0);
	Point point(0.5f, 0.5f);

	std::cout << "Point a: " << a << std::endl;
	std::cout << "Point b: " << b << std::endl;
	std::cout << "Point c: " << c << std::endl;
	std::cout << "Point point: " << point << std::endl;


	std::cout << "Point " << point << " is inside triangle ABC: " << bsq(a, b, c, point) << std::endl;

	return (EXIT_SUCCESS);
}
