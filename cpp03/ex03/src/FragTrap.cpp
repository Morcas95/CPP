#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	name = "Default";
	hp = 100;
	energy = 100;
	attackDamage = 30;

	std::cout << name << " has assembled." << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
    this->name = name;
	hp = 100;
	energy = 100;
	attackDamage = 30;

	std::cout << name << " has assembled." << std::endl;
}

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a)
{
}

FragTrap& FragTrap::operator=(const FragTrap &a)
{
	name = a.name;
	hp = a.hp;
	energy = a.energy;
	attackDamage = a.attackDamage;

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << name << " has been scrapped." << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (energy == 0)
	{
		std::cout << name << " has no energy." << std::endl;
		return ;
	}
	else if (hp == 0)
	{
		std::cout << name << " has no HP." << std::endl;
		return ;
	}

	std::cout << name << " crushes " << target
		<< ", dealing " << attackDamage
		<< " points of damage." << std::endl;
	energy--;
}

void FragTrap::highFivesGuys()
{
    std::cout << name << " wants a high five." << std::endl;
}
