#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	name = "Default";
	ClapTrap::name = "Default_clap_name";
	hp = 100;
	energy = 50;
	attackDamage = 30;

	std::cout << name << " has been forged." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hp = 100;
	energy = 50;
	attackDamage = 30;

	std::cout << this->name << " has been forged." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &a) : ClapTrap(a), ScavTrap(a), FragTrap(a), name(a.name)
{
	std::cout << name << " has been cloned." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &a)
{
	ClapTrap::operator=(a);
	name = a.name;

	std::cout << name << " has been reforged." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << name << " has shattered." << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << name << ", my ClapTrap name is " << ClapTrap::name << "." << std::endl;
}