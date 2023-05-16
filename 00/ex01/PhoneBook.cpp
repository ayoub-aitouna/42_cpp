#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cctype>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>

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
	if(index > 0 && index < 8)
		std::cout << m_contact[index - 1].Display(index) << std::endl;
	else
		std::cout << "index you entred is unvalide" << std::endl;
}


void printInBox(std::string value)
{
	int RemainingSpace = 10 - value.length();


	std::cout << "|";
	for (int i = 0; i < RemainingSpace; i++)
		std::cout << " ";

	for (int i = 0; i < value.length(); i++)
	{
		if(i >= 9)
		{
			std::cout << ".";
			break;
		}
		std::cout << value[i];
	}
}

void Print_Line(int len)
{
	for (int i = 0; i < len; i++)
		std::cout << "-";	
	std::cout << std::endl;
}

void PrintRow(std::string val1, std::string val2, std::string val3, std::string val4)
{
	printInBox(val1);
	printInBox(val2);
	printInBox(val3);
	printInBox(val4);
	std::cout << '|' << std::endl;
}

void PhoneBook::List()
{
	Print_Line(45);
	PrintRow("Index", "First Name", "Last Name", "Nick Name");
	Print_Line(45);
	for(int i = 0; i < this->index; i++)
		PrintRow(std::to_string(this->index), m_contact[i].GetFirstName(), m_contact[i].GetLastName(), m_contact[i].GetNickName());
	Print_Line(45);
}
