#include "PhoneBook.hpp"
#include <iostream>

void UserInput()
{
    std::string input;
    std::cout << "Enter Operatrion (ADD/Search)" << std::endl;
    std::cin >> input;
    PhoneBook phoneBook;

    if (input == "ADD")
    {
        std::string m_first_name;
        std::string m_last_name;
        std::string m_nickname;
        std::string m_darkest_secret;
        std::string m_phone_number;
        
        std::cout << "first name" << std::endl;
        std::cin >> input;
    }
    else if (input == "SEARCH")
    {
        phoneBook.List();
        int number;

        std::cout << "enter the number of contact" << std::endl;
        std::cin >> number;
        phoneBook.Search(number);
    }
    else
    {
        std::cout << "Operation is unvalide" << std::endl;
    }
    UserInput();
}

int main(int ac, char **av)
{
    UserInput();
    return (0);
}