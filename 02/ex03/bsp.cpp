
#include "Point.hpp"
#include "Fixed.hpp"
#include <bits/types/FILE.h>

Fixed Magnatude(Fixed value)
{
	if (value < 0)
		return -1 * value;
	return value;
}

Fixed Area(Point const &a, Point const &b, Point const &c)
{
	return Fixed(0.5f) * Magnatude(((b.Getx() - a.Getx()) * (c.Gety() - a.Getx())) - ((c.Getx() - a.Getx()) * (b.Gety() - a.Gety())));
}

bool bsq(Point const a, Point const b, Point const c, Point const point)
{
	return (Area(a, b, c) == (Area(point, a, b) + Area(point, b, c) + Area(point, a, c)));
}
