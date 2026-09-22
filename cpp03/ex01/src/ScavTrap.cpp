#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	name = "Default";
	hp = 100;
	energy = 50;
	attackDamage = 20;

	std::cout << name << " has appeared." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
    this->name = name;
	hp = 100;
	energy = 50;
	attackDamage = 20;

	std::cout << name << " has appeared." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a) : ClapTrap(a)
{
    name = a.name;
	hp = a.hp;
	energy = a.energy;
	attackDamage = a.attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &a)
{
	name = a.name;
	hp = a.hp;
	energy = a.energy;
	attackDamage = a.attackDamage;

	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " has disappeared." << std::endl;
}

void ScavTrap::attack(const std::string &target)
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

	std::cout << name << " strikes " << target
		<< " from the shadows, dealing " << attackDamage
		<< " points of damage." << std::endl;
	energy--;
}

void ScavTrap::guardGate()
{
    std::cout << name << " is now in Gate keeper mode." << std::endl;
}