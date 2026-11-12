#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	brain = new Brain();
    std::cout << "Cat constructor called." << std::endl;
    Animal::type = "Cat";
}

Cat::Cat(const Cat &a) : Animal(a), brain(new Brain(*a.brain))
{
    std::cout << "Cat copy constructor called." << std::endl;
    Animal::type = "Cat";
}

Cat& Cat::operator=(const Cat &a)
{
    if (this != &a)
    {
		Animal::operator=(a);
		delete brain;
		brain = new Brain(*a.brain);
	}
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called." << std::endl;
	delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        brain->ideas[index] = idea;
}

std::string Cat::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return brain->ideas[index];
    return "";
}
