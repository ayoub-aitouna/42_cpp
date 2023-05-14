#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <type_traits>

void UserInput(PhoneBook &phoneBook)
{
	std::string input;
	std::cout << "Enter Operatrion (ADD/Search)" << std::endl;
	std::cin >> input;

	if (input == "ADD")
	{
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;

		std::cout << "first name" << std::endl;
		std::cin >> first_name;

		std::cout << "last name" << std::endl;
		std::cin >> last_name;

		std::cout << "nickname" << std::endl;
		std::cin >> nickname;

		std::cout << "darkest secret" << std::endl;
		std::cin >> darkest_secret;

		std::cout << "phone number" << std::endl;
		std::cin >> phone_number;

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
