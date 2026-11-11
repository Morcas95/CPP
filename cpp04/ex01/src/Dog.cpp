#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog constructor called." << std::endl;
    Animal::type = "Dog";
}

Dog::Dog(const Dog &a) : Animal(a)
{
    std::cout << "Dog copy constructor called." << std::endl;
    Animal::type = "Dog";
}

Dog& Dog::operator=(const Dog &a)
{
    if (this != &a)
        Animal::operator=(a);
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}