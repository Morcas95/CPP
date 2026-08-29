#ifndef WEAPON_HPP
	#define WEAPON_HPP

	#include <iostream>
	#include <cstdlib>

	class Weapon {

		public:
			Weapon(std::string weapon);
			~Weapon(void);
            const std::string& getType(void);
            void setType(std::string weaponType);
		private:
			std::string type;
	};

#endif
