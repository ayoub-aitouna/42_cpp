#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <iostream>
#include <cstdlib>

typedef enum type
{
	T_NPOS = -1,
	T_CHAR = 0,
	T_INT = 1,
	T_FLOAT = 2,
	T_DOUBLE = 3
} t_type;

class ScalarConverter
{
	private:
		static float f_value;
		static double d_value;
		static int i_value;
		static char c_value;

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &lhs);
		ScalarConverter &operator=(const ScalarConverter &lhs);
		~ScalarConverter();

	public:
		static void convert(std::string initial_value);
};

#endif
