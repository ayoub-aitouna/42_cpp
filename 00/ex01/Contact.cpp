#include "Contact.hpp"

Contact::Contact()
{
}
Contact::Contact(std::string m_first_name, std::string m_last_name, std::string m_nickname, std::string m_darkest_secret, std::string m_phone_number)
{
	this->m_first_name = m_first_name;
	this->m_last_name = m_last_name;
	this->m_nickname = m_nickname;
	this->m_darkest_secret = m_darkest_secret;
	this->m_phone_number = m_phone_number;
}

Contact::~Contact()
{
}

std::string Contact::GetFirstName()
{
	return (m_first_name);
}

void Contact::SetFirstName(std::string name)
{
	m_first_name = name;
}

std::string Contact::GetLastName()
{
	return (m_last_name);
}

void Contact::SetLastName(std::string name)
{
	m_last_name = name;
}

std::string Contact::GetNickName()
{
	return (m_nickname);
}

void Contact::SetNickName(std::string name)
{
	m_nickname = name;
}

std::string Contact::GetSecret()
{
	return (m_darkest_secret);
}

void Contact::SetSecret(std::string secret)
{
	m_darkest_secret = secret;
}

std::string Contact::GetPhoneNumebr()
{
	return (m_phone_number);
}

void Contact::SetPhoneNumber(std::string number)
{
	m_phone_number = number;
}
