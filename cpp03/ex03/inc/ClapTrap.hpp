#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

	#include <iostream>
	#include <string>

	class ClapTrap {

		public:
			ClapTrap(void);
			ClapTrap(const std::string &name);
			ClapTrap(const ClapTrap &a);
			ClapTrap& operator=(const ClapTrap &a);
			~ClapTrap(void);
			void attack(const std::string &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
		protected:
			std::string name;
			unsigned int hp;
			unsigned int energy;
			unsigned int attackDamage;

		};

#endif
