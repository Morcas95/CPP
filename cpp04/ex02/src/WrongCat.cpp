#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "WrongCat constructor called." << std::endl;
    WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal(a)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
    WrongAnimal::type = "WrongCat";
}

WrongCat& WrongCat::operator=(const WrongCat &a)
{
    if (this != &a)
        WrongAnimal::operator=(a);
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}