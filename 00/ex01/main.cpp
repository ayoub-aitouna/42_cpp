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

void UserInput(PhoneBook &phoneBook)
{
	std::string input;
	std::cout << "Enter Operatrion (ADD/Search)" << std::endl;
	std::getline(std::cin, input);

	if (input == "ADD")
		AddContact(phoneBook);
	else if (input == "SEARCH")
	{
		int number;

		phoneBook.List();
		std::cout << "enter the number of contact" << std::endl;
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Please enter a valided Number " << std::endl;
		}
		std::cin.ignore(INT_MAX, '\n');
		phoneBook.Search(number);
	}
	else if (input == "EXIT")
		return;
	else
		std::cout << "Operation is unvalide" << std::endl;
	UserInput(phoneBook);
}

int main(void)
{
	PhoneBook phoneBook;

	UserInput(phoneBook);
	return (0);
}
