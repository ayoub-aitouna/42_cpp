#include "Data.hpp"

Data::Data()
{
}

Data::Data(int age, std::string name, std::string username)
	: age(age), name(name), username(username)
{
}

Data::Data(Data &lhs)
{
	*this = lhs;
}

Data &Data::operator=(const Data &lhs)
{
	if (this != &lhs)
	{
		this->age = lhs.age;
		this->name = lhs.name;
		this->username = lhs.username;
	}
	return (*this);
}

int Data::getAge(void) const
{
	return (this->age);
}
std::string Data::getName() const
{
	return (this->name);
}
std::string Data::getUserName() const
{
	return (this->username);
}
std::ostream &operator<<(std::ostream &os, const Data &lhs)
{
	os << lhs.getName() << " " << lhs.getUserName()
		<< " Age : " << lhs.getAge();
	return (os);
}

Data ::~Data()
{
}
