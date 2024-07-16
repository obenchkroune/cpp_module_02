#include "../include/Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &point) : x(point.x), y(point.y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &)
{
	return *this;
}

const Fixed &Point::getX() const
{
	return x;
}

const Fixed &Point::getY() const
{
	return y;
}

std::ostream &operator<<(std::ostream &os, Point &p)
{
	os << "(" << p.getX() << ", " << p.getY() << ")";
	return os;
}
