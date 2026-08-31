#include "HumanB.hpp"

HumanB::HumanB(std::string humanName)
{
	name = humanName;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
	if (weapon->getType() == "" || weapon == NULL)
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
	weapon = &type;
}
