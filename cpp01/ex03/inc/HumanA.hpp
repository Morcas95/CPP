#ifndef HUMANA_HPP
	#define HUMANA_HPP

	#include <iostream>
	#include <cstdlib>
	#include "Weapon.hpp"

	class HumanA {

		public:
			HumanA(std::string humanName, Weapon &type);
			~HumanA(void);
			void attack(void);
		private:
			std::string name;
			Weapon &weapon;
	};

#endif
