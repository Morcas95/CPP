#ifndef POINT_HPP
	#define POINT_HPP

	#include <iostream>
	#include <cstdlib>
    #include <cmath>
	#include "./Fixed.hpp"

	class Point {

		public:
			Point(void);
			Point(const float x, const float y);
			Point(const Point &a);
			Point& operator=(const Point &a);
			~Point(void);
			Fixed getX(void)const;
			Fixed getY(void)const;
		private:
			const Fixed x;
			const Fixed y;
	};

#endif
