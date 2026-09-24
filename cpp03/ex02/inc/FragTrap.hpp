#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP

	#include <iostream>
	#include <string>
    #include "ClapTrap.hpp"

	class FragTrap : public ClapTrap {

		public:
			FragTrap(void);
			FragTrap(const std::string &name);
			FragTrap(const FragTrap &a);
			FragTrap& operator=(const FragTrap &a);
			~FragTrap(void);
			void attack(const std::string &target);
            void highFivesGuys(void);
		};

#endif
