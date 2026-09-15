#include "../inc/Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &a) : x(a.x), y(a.y)
{
}

Point& Point::operator=(const Point &a)
{
	(void)a;
	return (*this);
}

Point::~Point()
{
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}
