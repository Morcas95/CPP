#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedValue = a.getRawBits();
}

Fixed::Fixed(const int inb)
{
    setRawBits(inb * (1 << bits));
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float flnb)
{
    setRawBits(roundf((flnb) * (1 << bits)));
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedValue = a.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	fixedValue = raw;
}

float Fixed::toFloat(void) const
{
    float flnb = static_cast<float>(getRawBits()) / (1 << bits);
    return (flnb);
}

int Fixed::toInt(void) const
{
    return (getRawBits() / (1 << bits));
}

std::ostream& operator<<(std::ostream& o, const Fixed& a)
{
    o << a.toFloat();
    return (o);
}
