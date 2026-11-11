#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat constructor called." << std::endl;
    Animal::type = "Cat";
}

Cat::Cat(const Cat &a) : Animal(a)
{
    std::cout << "Cat copy constructor called." << std::endl;
    Animal::type = "Cat";
}

Cat& Cat::operator=(const Cat &a)
{
    if (this != &a)
        Animal::operator=(a);
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}