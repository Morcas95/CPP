#include "Zombie.hpp"

int main(void)
{
	std::string name;
	std::cout << "Enter the Zombie name: ";
	std::getline(std::cin, name);

	Zombie* z = newZombie(name);
	z->announce();
	randomChump(name);

	delete z;

	return (0);
}
