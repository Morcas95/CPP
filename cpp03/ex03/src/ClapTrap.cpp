#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Default";
	hp = 10;
	energy = 10;
	attackDamage = 0;

	std::cout << name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name)
{
	hp = 10;
	energy = 10;
	attackDamage = 0;

	std::cout << name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a) : name(a.name), hp(a.hp), energy(a.energy), attackDamage(a.attackDamage)
{
	std::cout << name << " has been copied." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &a)
{
	name = a.name;
	hp = a.hp;
	energy = a.energy;
	attackDamage = a.attackDamage;

	std::cout << name << " has been assigned." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
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

	std::cout << name << " attacks " << target
		<< ", dealing " << attackDamage
		<< " points of damage." << std::endl;
	energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hp)
	{
		hp = 0;
		std::cout << name << " has died." << std::endl;
		return ;
	}
	hp = hp - amount;
	std::cout << name << " has taken "
		<< amount << " points of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	hp = hp + amount;
	std::cout << name << " has repaired " << amount << " of HP." << std::endl;
}
