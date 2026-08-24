#include <iostream>

int main(void)
{
    std::string sent = "HI THIS IS BRAIN";
    std::string* stringPTR = &sent;
    std::string& stringREF = sent;

    std::cout << std::endl << "String's memory address: " << &sent << std::endl;
    std::cout << "Pointer's memory address: " << stringPTR << std::endl;
    std::cout << "Reference's memory address: " << &stringREF << std::endl << std::endl;

    std::cout << "String's value: " << sent << std::endl;
    std::cout << "Pointer's value: " << *stringPTR << std::endl;
    std::cout << "Reference's value: " << stringREF << std::endl << std::endl;

    return (0);
}