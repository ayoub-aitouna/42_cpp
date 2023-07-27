#include "ScalarConverter.hpp"

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

void ScalarConverter::convert(std::string initial_value)
{
    float f_value;
    double d_value;
    int i_value;
    char c_value;

    f_value = atof(initial_value.c_str());
    d_value = atof(initial_value.c_str());
    i_value = atoi(initial_value.c_str());
    c_value = static_cast<char>(i_value);

    std::cout << "f : " << f_value << std::endl;
    std::cout << "d : " << d_value << std::endl;
    std::cout << "i : " << i_value << std::endl;
    std::cout << "c : " << c_value << std::endl;
}

ScalarConverter::~ScalarConverter()
{
}