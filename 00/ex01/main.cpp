#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <climits>


std::string Read(std::string Msg)
{
	std::string tmp;
	do
	{
		std::cout << Msg << std::endl;
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			exit(0);
	} while (tmp.length() == 0);
	return tmp;
}

void AddContact(PhoneBook &phoneBook)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

	first_name = Read("first name");
	last_name = Read("last name");
	nickname = Read("nickname");
	darkest_secret = Read("darkest secret");
	phone_number = Read("phone number");
	Contact contact(first_name, last_name, nickname,
					darkest_secret, phone_number);
	phoneBook.Add(contact);
}

void UserInput()
{
	PhoneBook phoneBook;
	int number;
	std::string input;

	while (true)
	{
		std::cout << "Enter Operatrion (ADD/SEARCH/EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (input == "ADD")
			AddContact(phoneBook);
		else if (input == "SEARCH")
		{
			phoneBook.List();
			std::cout << "enter the number of contact" << std::endl;
			std::cin >> number;
			if(std::cin.eof())
				exit(0);
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cout << "Please enter a valided Number " << std::endl;
				std::cin.ignore(INT_MAX, '\n');
				continue;
			}
			std::cin.ignore(INT_MAX, '\n');
			phoneBook.Search(number);
		}
		else if (input == "EXIT")
			return;
		else
			std::cout << "Operation is unvalide" << std::endl;
	}
}

int main(void)
{
	UserInput();
	return (0);
}
