#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook p;
    std::string prompt;
    while (1)
    {
        std::cout << std::endl;
        std::cout << "Choose an option (ADD/SEARCH/EXIT): ";
        std::getline(std::cin, prompt);
        std::cout << std::endl;
        for (int j = 0; prompt[j]; j++)
        {
            prompt[j] = std::toupper(prompt[j]);
        }
        if (prompt == "ADD")
            p.addContact();
        else if (prompt == "SEARCH")
            p.searchContact();
        else if (prompt == "EXIT")
            break ;
        else
            std::cout << "Command not found" << std::endl;
    }
    return 0;
}