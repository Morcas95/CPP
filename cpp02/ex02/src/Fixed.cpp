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

bool Fixed::operator>(const Fixed &a) const
{
	return (this->getRawBits() > a.getRawBits());
}

bool Fixed::operator<(const Fixed &a) const
{
	return (this->getRawBits() < a.getRawBits());
}

bool Fixed::operator>=(const Fixed &a) const
{
	return (this->getRawBits() >= a.getRawBits());
}

bool Fixed::operator<=(const Fixed &a) const
{
	return (this->getRawBits() <= a.getRawBits());
}

bool Fixed::operator==(const Fixed &a) const
{
	return (this->getRawBits() == a.getRawBits());
}

bool Fixed::operator!=(const Fixed &a) const
{
	return (this->getRawBits() != a.getRawBits());
}

Fixed Fixed::operator+(const Fixed &a) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() + a.getRawBits());
	return (res);
}

Fixed Fixed::operator-(const Fixed &a) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() - a.getRawBits());
	return (res);
}

Fixed Fixed::operator*(const Fixed &a) const
{
	Fixed res;
	res.setRawBits((this->getRawBits() * a.getRawBits()) / (1 << bits));
	return (res);
}

Fixed Fixed::operator/(const Fixed &a) const
{
	Fixed res;
	res.setRawBits((this->getRawBits() * (1 << bits)) / a.getRawBits());
	return (res);
}

Fixed& Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed res(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (res);
}

Fixed& Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed res(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (res);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
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
