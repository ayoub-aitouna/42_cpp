#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <iostream>
#include <cstdlib>

class ScalarConverter
{
private:
    /* data */
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &lhs);
    ScalarConverter &operator=(const ScalarConverter &lhs);
    ~ScalarConverter();

public:
    static void convert(std::string initial_value);
};

#endif