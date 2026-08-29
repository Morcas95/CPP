#ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP

	#include <iostream>
	#include <cstdlib>

	class Zombie {

		public:
			Zombie(std::string Zombiename);
			~Zombie(void);
			void announce(void);
		private:
			std::string name;
	};

	void randomChump(std::string name);
	Zombie* newZombie(std::string name);

#endif
