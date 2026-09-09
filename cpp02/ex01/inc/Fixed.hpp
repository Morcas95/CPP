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
			~Fixed(void);
			int getRawBits(void) const;
			void setRawBits(const int raw);
            float toFloat(void) const;
            int toInt(void) const;
		private:
			int fixedValue;
			static const int bits = 8;
	};

    std::ostream& operator<<(std::ostream& o, const Fixed& a);

#endif
