#include "Base.hpp"

Base::Base()
{
}

Base::Base(Base &lhs)
{
	*this = lhs;
}

Base &Base::operator=(const Base &lhs)
{
	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
}

Base ::~Base()
{
}

