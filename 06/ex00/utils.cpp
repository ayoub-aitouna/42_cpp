#include "ScalarConverter.hpp"
#include <cstdio>
#include <cstdlib>
#include <cstring>

bool	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

bool	is_all_num(std::string str, size_t size)
{
	size_t	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < size)
	{
		if (!is_number(str.at(i)))
			return (false);
		i++;
	}
	return (true);
}

bool	float_type_validator(std::string str)
{
	int	dot_index;
	int	f_index;

	dot_index = str.find_first_of('.');
	f_index = str.find_first_of('f');
	if (dot_index == -1 || f_index == -1 || f_index < dot_index)
		return (false);
	else
	{
		return (is_all_num(str,
							dot_index) &&
				is_all_num(&str[dot_index + 1], f_index - dot_index - 1)
					&& str[str.length() - 1] == 'f');
	}
}

bool	double_type_validator(std::string str)
{
	int	d_index;

	d_index = str.find_first_of('.');
	if (d_index == -1)
		return (false);
	else
	{
		return (is_all_num(str,
							d_index) &&
				is_all_num(&str[d_index + 1], str.length() - d_index - 1));
	}
}

int	get_type(std::string str)
{
	if (str.length() == 1 && (str[0] < 48 || str[0] > 57) && std::isprint(str[0]))
		return (T_CHAR);
	if (float_type_validator(str))
		return (T_FLOAT);
	if (double_type_validator(str))
		return (T_DOUBLE);
	if (is_all_num(str, str.length()))
		return (T_INT);
	return (T_NPOS);
}

bool	is_pseudo_literals(std::string str)
{
	if (str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff"
		|| str == "nan" || str == "nanf")
		return (true);
	return (false);
}
