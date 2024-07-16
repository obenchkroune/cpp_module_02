#include "../include/Point.hpp"

Fixed calculatePointOrientation(Point a, Point b, Point p)
{
	return (p.getY() - a.getY()) * (b.getX() - a.getX()) - (p.getX() - a.getX()) * (b.getY() - a.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed ab = calculatePointOrientation(a, b, point);
	Fixed bc = calculatePointOrientation(b, c, point);
	Fixed ca = calculatePointOrientation(c, a, point);
	return ((ab < 0 && bc < 0 && ca < 0) || (ab > 0 && bc > 0 && ca > 0));
}
