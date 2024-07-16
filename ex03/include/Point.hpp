#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point(void);
		Point(const float, const float);
		Point(const Point &);
		~Point(void);
		Point &operator=(const Point &);
		const Fixed &getX(void) const;
		const Fixed &getY(void) const;
};

std::ostream &operator<<(std::ostream &, Point &);

bool bsp(Point const a, Point const b, Point const c, Point const point);
