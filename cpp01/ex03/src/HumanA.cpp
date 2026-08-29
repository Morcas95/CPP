#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon &type) : weapon(type)
{
	name = humanName;
}
HumanA::~HumanA(void)
{
}
void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
