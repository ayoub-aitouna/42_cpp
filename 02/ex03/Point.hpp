#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
#include <iostream>

class Point{

	public:
		Point();
		Point(const float x, const float y);
		Point(Point &Point);
		Point &operator=(const Point& copy);
		~Point();
	private:
		Fixed const x;
		Fixed const y;
	public:
		const	Fixed Getx() const;
		const	Fixed Gety() const;
};

std::ostream &operator <<(std::ostream &os, Point const &value);
Fixed Area(Point const &a, Point const &b, Point const &c);
bool bsq(Point const a, Point const b, Point const c, Point const point);
#endif
