#include "ScalarConverter.hpp"
#include <cstdlib>

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

bool	is_number(char c)
{
	return (c > '0' && c < '9');
}
bool	is_all_num(std::string str, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (!is_number(str.at(i)))
			return (false);
	}
	return (true);
}

bool	float_type_validator(std::string str)
{
	int	dot_index;
	int	f_index;

	dot_index = str.find_first_of('.');
	f_index = str.find_first_of('f');
	if (dot_index == -1 || f_index == -1 || (f_index - dot_index) != 1)
		return (false);
	else
		return (is_all_num(str, dot_index));
}

bool	double_type_validator(std::string str)
{
	int	f_index;

	f_index = str.find_first_of('f');
	if (f_index == -1)
		return (false);
	else
		return (is_all_num(str, f_index));
}

int	get_type(std::string str)
{
	if (str.length() == 1)
		return (T_CHAR);
	if (float_type_validator(str))
		return (T_FLOAT);
	if (double_type_validator(str))
		return (T_DOUBLE);
	if (is_all_num(str, str.length()))
		return (T_DOUBLE);
	return (T_NPOS);
}

void	print_result(void)
{
}

void ScalarConverter::convert(std::string initial_value)
{
	int	type;

	type = get_type(initial_value);
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
		c_value = static_cast<int>(i_value);
		f_value = static_cast<float>(i_value);
		d_value = static_cast<double>(i_value);
		break ;
	case T_FLOAT:
		f_value = atof(initial_value.c_str());
		c_value = static_cast<int>(f_value);
		i_value = static_cast<float>(f_value);
		d_value = static_cast<double>(f_value);
		break ;
	case T_DOUBLE:
		f_value = atof(initial_value.c_str());
		break ;
	case T_NPOS:
		break ;
	}
	print_result();
}

ScalarConverter::~ScalarConverter()
{
}
