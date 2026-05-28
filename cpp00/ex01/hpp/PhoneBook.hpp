#ifndef     PHONEBOOK_HPP
    #define     PHONEBOOK_HPP

    #include <iostream>
    #include <iomanip>
    #include <cstdlib>
    #include "Contact.hpp"

    class   PhoneBook
    {
        private:
            Contact users[8];
            int i;
            int full;
            void    fillSearch(int index);
            void    displayContact(int index);
            int     checkNumber(std::string number);
        public:
            PhoneBook();
            int     addContact(void);
            void    searchContact(void);
    };

#endif