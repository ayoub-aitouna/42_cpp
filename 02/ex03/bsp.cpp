
#include "Point.hpp"
#include "Fixed.hpp"

Fixed Magnatude(Fixed value)
{
	if (value < 0)
		return Fixed(-1) * value;
	return value;
}

Fixed Area(Point const &a, Point const &b, Point const &c)
{
	return Fixed(0.5f) * Magnatude(((b.Getx() - a.Getx()) * (c.Gety() - a.Gety())) - ((c.Getx() - a.Getx()) * (b.Gety() - a.Gety())));
}

bool bsq(Point const a, Point const b, Point const c, Point const point)
{
	if (Area(point, a, b)  == Fixed(0) || Area(point, b, c)  == Fixed(0) || Area(point, a, c) == Fixed(0))
		return (false);
	return (Area(a, b, c) == (Area(point, a, b) + Area(point, b, c) + Area(point, a, c)));
}
