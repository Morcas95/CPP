#include "../inc/bsp.hpp"

static Fixed crossProduct(const Point &p1, const Point &p2, const Point &p3)
{
    Fixed res = (p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - (p2.getY() - p1.getY()) * (p3.getX() - p1.getX());
    return (res);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    Fixed s1 = crossProduct(a, b, point);
    Fixed s2 = crossProduct(b, c, point);
    Fixed s3 = crossProduct(c, a, point);
    Fixed cero(0);

    if (s1 < cero && s2 < cero && s3 < cero)
        return (true);
    else if (s1 > cero && s2 > cero && s3 > cero)
        return (true);
    return (false);
}
