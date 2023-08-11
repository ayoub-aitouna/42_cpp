#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iterator>
template <typename T>
typename T::value_type easyfind(T &contaioner, typename T::value_type value)
{
	for (typename T::iterator it = contaioner.begin(); it != contaioner.end(); it++)
	{
		if (*it == value)
			return (*it);
	}
	throw std::runtime_error("could not find the value");
};

#endif
