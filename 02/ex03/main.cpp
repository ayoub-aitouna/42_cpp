#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(1.0f, 1.0f);
	Point b(2.0f, 3.0f);
	Point c(4.0f, 2.0f);

	std::cout << "Point a: " << a << std::endl;
	std::cout << "Point b: " << b << std::endl;
	std::cout << "Point c: " << c << std::endl;

	// Calculate the area of the triangle formed by the three points
	Fixed area = Area(a, b, c);
	std::cout << "Area of triangle ABC: " << area << std::endl;

	Point point(3.0f, 8.5f);
	std::cout << "Point " << point << " is inside triangle ABC: " << bsq(a, b, c, point) << std::endl;

	return (EXIT_SUCCESS);
}
