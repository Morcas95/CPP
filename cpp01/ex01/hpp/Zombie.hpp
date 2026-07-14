#ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP

	#include <iostream>
	#include <cstdlib>

	class Zombie {

		public:
			Zombie(std::string Zombiename);
            Zombie(void);
			~Zombie(void);
			void announce(void);
            void setName(std::string name);
		private:
			std::string name;
	};

	void randomChump(std::string name);

#endif