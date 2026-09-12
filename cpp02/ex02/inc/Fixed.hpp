#ifndef FIXED_HPP
	#define FIXED_HPP

	#include <iostream>
	#include <cstdlib>
    #include <cmath>

	class Fixed {

		public:
			Fixed(void);
			Fixed(const Fixed &a);
            Fixed(const int inb);
            Fixed(const float flnb);
			Fixed& operator=(const Fixed &a);
			Fixed& operator++(void);
			Fixed operator++(int);
			Fixed& operator--(void);
			Fixed operator--(int);
			~Fixed(void);
			int getRawBits(void) const;
			void setRawBits(const int raw);
            float toFloat(void) const;
            int toInt(void) const;
			static Fixed& min(Fixed &a, Fixed &b);
			static const Fixed& min(const Fixed &a, const Fixed &b);
			static Fixed& max(Fixed &a, Fixed &b);
			static const Fixed& max(const Fixed &a, const Fixed &b);
			bool operator>(const Fixed &a) const;
			bool operator<(const Fixed &a) const;
			bool operator>=(const Fixed &a) const;
			bool operator<=(const Fixed &a) const;
			bool operator==(const Fixed &a) const;
			bool operator!=(const Fixed &a) const;
			Fixed operator+(const Fixed &a) const;
			Fixed operator-(const Fixed &a) const;
			Fixed operator*(const Fixed &a) const;
			Fixed operator/(const Fixed &a) const;
		private:
			int fixedValue;
			static const int bits = 8;
		};
		
		std::ostream& operator<<(std::ostream& o, const Fixed& a);

#endif
