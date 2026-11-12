#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &a) : type(a.type)
{
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal &a)
{
    if (this != &a)
        this->type = a.type;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType(void) const
{
    return type;
}
