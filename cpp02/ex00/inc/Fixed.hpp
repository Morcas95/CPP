#ifndef FIXED_HPP
	#define FIXED_HPP

	#include <iostream>
	#include <cstdlib>

	class Fixed {

		public:
			Fixed(void);
			Fixed(const Fixed &a);
			Fixed& operator=(const Fixed &a);
			~Fixed(void);
			int getRawBits(void) const;
			void setRawBits(int const raw);
		private:
			int fixedValue;
			static const int bits = 8;
	};

#endif
