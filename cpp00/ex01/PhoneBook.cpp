#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    i = 0;
    full = 0;
}

int    PhoneBook::addContact(void)
{
    std::string name;
    std::string surname;
    std::string nName;
    std::string number;
    std::string secret;
    std::cout << "Enter first name: ";
    std::getline(std::cin, name);
    std::cout << "Enter last name: ";
    std::getline(std::cin, surname);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nName);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, number);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, secret);
    if (name.empty() || surname.empty() || nName.empty() || number.empty() || secret.empty())
    {
        std::cout << "Error: Empty field" << std::endl; 
        return 0;
    }
    users[i].setFirstName(name);
    users[i].setLastName(surname);
    users[i].setNickname(nName);
    users[i].setPhoneNumber(number);
    users[i].setDarkestSecret(secret);
    i++;
    if (i == 8)
    {
        full = 1;
        i = 0;
    }
    return (1);
}

void     PhoneBook::searchContact(void)
{
    std::string input;
    int number;
    if (full == 0 && i == 0)
        return ;
    if (full == 0)
    {
        for(int j = 1; j <= i; j++)
        {
            fillSearch(j);
        }
    }
    else
    {
        for(int j = 1; j < 9; j++)
        {
            fillSearch(j);
        }
    }
    std::cout << std::endl << "Enter the contact index: ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    number = atoi(input.c_str());
    if (full == 1)
    {
        if (number < 1 || number > 8)
            std::cout << "Error. Wrong index." << std::endl;
        else
            displayContact(number);
    }
    else
    {
        {
        if (number < 1 || number > i)
            std::cout << "Error. Wrong index." << std::endl;
        else
            displayContact(number);
        }
    }
    std::cout << std::endl;
}

void    PhoneBook::fillSearch(int index)
{
    std::string name = users[index - 1].getFirstName();
    std::string surname = users[index - 1].getLastName();
    std::string nName = users[index - 1].getNickname();

    std::cout << std::setw(10) << std::right << index << "|";
    if (name.length() > 9)
        std::cout << std::setw(10) << std::right << name.substr(0 , 9) + "." << "|";
    else
        std::cout << std::setw(10) << std::right << name << "|";
    if (surname.length() > 9)
        std::cout << std::setw(10) << std::right << surname.substr(0 , 9) + "." << "|";
    else
        std::cout << std::setw(10) << std::right << surname << "|";
    if (nName.length() > 9)
        std::cout << std::setw(10) << std::right << nName.substr(0 , 9) + "." << std::endl;
    else
        std::cout << std::setw(10) << std::right << nName << std::endl;
}

void    PhoneBook::displayContact(int index)
{
    std::string name = users[index - 1].getFirstName();
    std::string surname = users[index - 1].getLastName();
    std::string nName = users[index - 1].getNickname();
    std::string number = users[index - 1].getPhoneNumber();
    std::string secret = users[index - 1].getDarkestSecret();
    std::cout << std::setw(20) << std::left << "First Name: ";
    std::cout << name << std::endl;
    std::cout << std::setw(20) << std::left << "Last Name: ";
    std::cout << surname << std::endl;
    std::cout << std::setw(20) << std::left << "Nickname: ";
    std::cout << nName << std::endl;
    std::cout << std::setw(20) << std::left << "Phone Number: ";
    std::cout << number << std::endl;
    std::cout << std::setw(20) << std::left << "Darkest Secret: ";
    std::cout << secret << std::endl;
}