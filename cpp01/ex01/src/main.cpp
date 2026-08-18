#include "./../hpp/Zombie.hpp"

int main(void)
{
	std::string name;
	int number = 0;
	while (number < 1)
	{
		std::cout << "Enter number of Zombies: ";
		std::cin >> number;
		if (number < 1)
			std::cout << "The number must be more than 0!" << std::endl;
	}
	std::cout << "Enter name of Zombies: ";
	std::cin >> name;

	Zombie* z = zombieHorde(number, name);

	for(int i = 0; i < number; i++)
	{
		z[i].announce();
	}

	delete[] z;

	return (0);
}