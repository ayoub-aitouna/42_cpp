#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <cstdlib>
# include <iostream>
# include <string>

typedef enum type
{
	T_NPOS = -1,
	T_CHAR = 0,
	T_INT = 1,
	T_FLOAT = 2,
	T_DOUBLE = 3
}		t_type;

class ScalarConverter
{
  private:
	static float f_value;
	static double d_value;
	static int i_value;
	static char c_value;
	static std::string str;

  private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &lhs);

  public:
	ScalarConverter &operator=(const ScalarConverter &lhs);
	~ScalarConverter();

  public:
	static void convert(std::string initial_value);

  private:
	static void print_double();
	static void print_float();
	static void print_int();
	static void print_char();
};
bool	is_all_num(std::string str, size_t size);
bool	float_type_validator(std::string str);
bool	double_type_validator(std::string str);
int		get_type(std::string str);
bool	is_pseudo_literals(std::string str);
bool	is_number(char c);
#endif
