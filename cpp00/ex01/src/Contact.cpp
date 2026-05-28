#include "Contact.hpp"

void Contact::setFirstName(std::string name)
{
    firstName = name;
}

std::string Contact::getFirstName(void)
{
    return firstName;
}

void Contact::setLastName(std::string name)
{
    lastName = name;
}

std::string Contact::getLastName(void)
{
    return lastName;
}

void Contact::setNickname(std::string name)
{
    nickname = name;
}

std::string Contact::getNickname(void)
{
    return nickname;
}

void Contact::setPhoneNumber(std::string Number)
{
    phoneNumber = Number;
}

std::string Contact::getPhoneNumber(void)
{
    return phoneNumber;
}

void Contact::setDarkestSecret(std::string Secret)
{
    darkestSecret = Secret;
}

std::string Contact::getDarkestSecret(void)
{
    return darkestSecret;
}