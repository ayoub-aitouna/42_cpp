#include "PhoneBook.hpp"
#include <cctype>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>

void PhoneBook::Print_Contact(int index)
{
    std::cout << m_contact[index].GetFirstName() + " " + m_contact[index].GetLastName() +
                     " " + m_contact[index].GetNickName() + " " + m_contact[index].GetPhoneNumebr() +
                     " " + " " + m_contact[index].GetSecret();
}

PhoneBook::PhoneBook()
{
}
PhoneBook::~PhoneBook()
{
}

void PhoneBook::Add(Contact new_contact)
{
    m_contact[index++] = new_contact;
    if (index > 7)
        index = 7;
}
void PhoneBook::Search(int index)
{
    Print_Contact(index);
    std::cout << std::endl;
}
void PhoneBook::List()
{
    for (size_t i = 0; i < index; i++)
    {
        Print_Contact(i);
        if (i % 2 == 0)
            std::cout
                << std::endl;
        else
            std::cout << " | ";
    }
    std::cout
        << std::endl;
}