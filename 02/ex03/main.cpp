#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point a(0.5f, 0.5f);
	Point b(0.5f, 2.5f);
	Point c(2.5f, 0.5f);
	Point point(1.0f, 1.0f);

	std::cout << "Point a: " << a << std::endl;
	std::cout << "Point b: " << b << std::endl;
	std::cout << "Point c: " << c << std::endl;
	std::cout << "Point p:" << point << (bsq(a, b, c, point) == true ? "is" : "isn't") << " inside triangle ABC." << std::endl;
	return (EXIT_SUCCESS);
}
