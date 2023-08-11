#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iterator>
#include <exception>

class InvalideValueException : public std::exception{
    
    private:
      const  char *msg;
    
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
typename T::value_type easyfind(T &contaioner, typename T::value_type value)
{
	for (typename T::iterator it = contaioner.begin(); it != contaioner.end(); it++)
	{
		if (*it == value)
			return (*it);
	}
    
	throw InvalideValueException("Invalide Value!");
};

#endif
