#ifndef BSP_HPP
	#define BSP_HPP

	#include <iostream>
	#include <cstdlib>
    #include <cmath>
	#include "./Fixed.hpp"
    #include "./Point.hpp"

	bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif