#include "./../hpp/Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::setName(std::string zombieName)
{
    name = zombieName;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": has been removed" << std::endl;
}