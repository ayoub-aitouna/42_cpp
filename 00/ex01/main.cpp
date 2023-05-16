#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <ios>
#include <iostream>
#include <linux/limits.h>
#include <streambuf>
#include <limits.h>
#include <string>
#include <type_traits>

void UserInput(PhoneBook &phoneBook)
{
	std::string input;
	std::cout << "Enter Operatrion (ADD/Search)" << std::endl;
	std::getline(std::cin, input);

	if (input == "ADD")
	{
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;

		std::cout << "first name" << std::endl;
		std::getline(std::cin, first_name);

		std::cout << "last name" << std::endl;
		std::getline(std::cin, last_name);

		std::cout << "nickname" << std::endl;
		std::getline(std::cin, nickname);

		std::cout << "darkest secret" << std::endl;
		std::getline(std::cin, darkest_secret);

		std::cout << "phone number" << std::endl;
		std::getline(std::cin, phone_number);

		Contact contact (first_name, last_name, nickname,
				darkest_secret, phone_number);
		phoneBook.Add(contact);
	}
	else if (input == "SEARCH")
	{
		phoneBook.List();
		int number;

		std::cout << "enter the number of contact" << std::endl;
		std::cin >> number;
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Please enter a valided Number " << std::endl;
		}
		std::cin.ignore(INT_MAX, '\n'); // Clear the input buffer
		phoneBook.Search(number);
	}
	else
	{
		std::cout << "Operation is unvalide" << std::endl;
	}
	UserInput(phoneBook);
}

int main(int ac, char **av)
{
	PhoneBook phoneBook;

	UserInput(phoneBook);
	return (0);
}
