#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iterator>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>



class InvalideValueException : public std::exception
{

private:
    const char *msg;

public:
    InvalideValueException(const char *msg) : msg(msg)
    {
    }
    const char *what() const throw()
    {
        return msg;
    }
};

template <typename T>
typename T::value_type easyfind(T &contaioner, int value)
{
    typename T::iterator val = std::find(contaioner.begin(), contaioner.end(), value);
    if (val == contaioner.end())
        throw InvalideValueException("Invalide Value!");
    return *val;
};
#endif
