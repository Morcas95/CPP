#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	brain = new Brain();
    std::cout << "Dog constructor called." << std::endl;
    Animal::type = "Dog";
}

Dog::Dog(const Dog &a) : Animal(a), brain(new Brain(*a.brain))
{
    std::cout << "Dog copy constructor called." << std::endl;
    Animal::type = "Dog";
}

Dog& Dog::operator=(const Dog &a)
{
    if (this != &a)
    {
		Animal::operator=(a);
		delete brain;
		brain = new Brain(*a.brain);
	}
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called." << std::endl;
	delete brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        brain->ideas[index] = idea;
}

std::string Dog::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return brain->ideas[index];
    return "";
}
