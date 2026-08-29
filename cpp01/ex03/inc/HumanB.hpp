#ifndef HUMANB_HPP
	#define HUMANB_HPP

	#include <iostream>
	#include <cstdlib>
	#include "Weapon.hpp"

	class HumanB {

		public:
			HumanB(std::string humanName);
			~HumanB(void);
			void attack(void);
			void setWeapon(Weapon type);
		private:
			std::string name;
			Weapon *weapon;
	};

#endif
