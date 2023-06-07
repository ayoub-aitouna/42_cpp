#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(Point &point) : x(point.Getx()), y(point.Gety())
{
}

Point &Point::operator=(const Point &copy)
{
	if (this != &copy)
	{
		*(Fixed *) &this->x = copy.Getx();
		*(Fixed *) &this->y = copy.Gety();
	}
	return *this;
}

Point::~Point()
{
}

const Fixed Point::Getx() const
{
	return (this->x);
}

const Fixed Point::Gety() const
{
	return (this->y);
}

std::ostream &operator<<(std::ostream &os, Point const &value)
{
	os << "(" << value.Getx() << "," << value.Gety() << ")";
	return (os);
}
