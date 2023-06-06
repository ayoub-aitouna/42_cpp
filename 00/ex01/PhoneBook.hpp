#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

private:
	Contact m_contact[8];
	int index;
	int filled;

public:
	void Add(Contact &new_contact);
	void Search(int index);
	void List();
	void Print_Contact(int index);
};
#endif
