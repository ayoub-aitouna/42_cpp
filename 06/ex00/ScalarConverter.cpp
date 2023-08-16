#include "ScalarConverter.hpp"
#include <cstdio>
#include <cstdlib>
#include <cstring>

float ScalarConverter::f_value = 0;
double ScalarConverter::d_value = 0;
int ScalarConverter::i_value = 0;
char ScalarConverter::c_value = 0;
std::string ScalarConverter::str = "";

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &lhs)
{
	*this = lhs;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &lhs)
{
	(void)lhs;
	return (*this);
}

void ScalarConverter::print_char()
{
	std::cout << "char: ";
	if (is_pseudo_literals(str))
		std::cout
			<< "imposible" << std::endl;
	else if (!std::isprint(c_value))
		std::cout
			<< "Non displayable" << std::endl;
	else
		std::cout << c_value << std::endl;
}

void ScalarConverter::print_int()
{
	std::cout << "int: ";
	if (is_pseudo_literals(str))
		std::cout
			<< "imposible" << std::endl;
	else
		std::cout << i_value << std::endl;
}

void ScalarConverter::print_float()
{
	std::cout << "float: ";
	if (is_pseudo_literals(str))
	{
		if (str == "+inf")
			std::cout << "+inff" << std::endl;
		else if (str == "-inf")
			std::cout << "-inff" << std::endl;
		else if (str == "nan")
			std::cout << "nanf" << std::endl;
		else
			std::cout << str << std::endl;
	}
	else
		std::cout << f_value << std::endl;
}

void ScalarConverter::print_double()
{
	std::cout << "double: ";
	if (is_pseudo_literals(str))
	{
		if (str == "+inff")
			std::cout << "+inf" << std::endl;
		else if (str == "-inff")
			std::cout << "-inf" << std::endl;
		else if (str == "nanf")
			std::cout << "nan" << std::endl;
		else
			std::cout << str << std::endl;
	}
	else
		std::cout << d_value << std::endl;
}

void ScalarConverter::convert(std::string initial_value)
{
	int	type;

	type = get_type(initial_value);
	str = initial_value;
	switch (type)
	{
	case T_CHAR:
		c_value = static_cast<char>(initial_value.at(0));
		i_value = static_cast<int>(c_value);
		f_value = static_cast<float>(c_value);
		d_value = static_cast<double>(c_value);
		break ;
	case T_INT:
		i_value = atoi(initial_value.c_str());
		c_value = static_cast<char>(i_value);
		f_value = static_cast<float>(i_value);
		d_value = static_cast<double>(i_value);
		break ;
	case T_FLOAT:
		f_value = atof(initial_value.c_str());
		c_value = static_cast<char>(f_value);
		i_value = static_cast<int>(f_value);
		d_value = static_cast<double>(f_value);
		break ;
	case T_DOUBLE:
		d_value = atof(initial_value.c_str());
		c_value = static_cast<char>(d_value);
		i_value = static_cast<int>(d_value);
		f_value = static_cast<float>(d_value);
		break ;
	case T_NPOS:
		break ;
	}
	print_char();
	print_int();
	print_float();
	print_double();
}

ScalarConverter::~ScalarConverter()
{
}
