#ifndef DIAMONDTRAP_HPP
	#define DIAMONDTRAP_HPP

	#include <iostream>
	#include <string>
	#include "ClapTrap.hpp"
	#include "ScavTrap.hpp"
	#include "FragTrap.hpp"

	class DiamondTrap : public ScavTrap, public FragTrap {

		public:
			DiamondTrap(void);
			DiamondTrap(const std::string &name);
			DiamondTrap(const DiamondTrap &a);
			DiamondTrap& operator=(const DiamondTrap &a);
			~DiamondTrap(void);
			void attack(const std::string &target);
			void whoAmI(void);
		private:
			std::string name;
		};

#endif