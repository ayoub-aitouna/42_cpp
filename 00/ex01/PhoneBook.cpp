#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cctype>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>
#include <sstream>

PhoneBook::PhoneBook()
{
	index = 0;
	filled = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::Add(Contact &new_contact)
{
	Contact contact(new_contact);
 	m_contact[(this->index % 8)] = contact;
	this->index++;
	this->filled++;
	if(this->filled >= 8)
	this->filled  = 8;
}
void PhoneBook::Search(int index)
{
	if (index >= 0 && index < this->filled)
		std::cout << m_contact[index].Display(index) << std::endl;
	else
		std::cout << "index you entred is unvalide" << std::endl;
}

void printInBox(std::string value)
{
	int RemainingSpace = 10 - value.length();

	std::cout << "|";
	for (int i = 0; i < RemainingSpace; i++)
		std::cout << " ";

	for (size_t i = 0; i < value.length(); i++)
	{
		if (i >= 9)
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
	std::ostringstream oss;

	Print_Line(45);
	PrintRow("Index", "First Name", "Last Name", "Nick Name");
	Print_Line(45);
	for (int i = 0; i < this->filled; i++)
	{
		oss << i ;
		PrintRow(oss.str(), m_contact[i].GetFirstName(), m_contact[i].GetLastName(), m_contact[i].GetNickName());
		oss.str("");
		oss.clear();
	}
	Print_Line(45);
}
