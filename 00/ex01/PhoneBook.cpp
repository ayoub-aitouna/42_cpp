#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cctype>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>

void PhoneBook::Print_Contact(int index)
{
	std::cout << "id : " << index << " First name : " << m_contact[index].GetFirstName() + " Last Name : " + m_contact[index].GetLastName() 
			+ " NickName : " + m_contact[index].GetNickName() + " PhoneNumber : " + m_contact[index].GetPhoneNumebr()
			+ " Darkest Secret : " + m_contact[index].GetSecret();
}

PhoneBook::PhoneBook()
{
	index = 0;
}
PhoneBook::~PhoneBook()
{
}

void PhoneBook::Add(Contact &new_contact)
{
	Contact contact(new_contact);
	m_contact[this->index] = contact;
	this->index++;
	if (this->index > 7)
		this->index = 7;
}
void PhoneBook::Search(int index)
{
	Print_Contact(index);
	std::cout << std::endl;
}

void PhoneBook::List()
{
	for (size_t i = 0; i < this->index; i++)
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
