#include "C.hpp"

C::C()
{
}

C::C(C &lhs) : Base()
{
	*this = lhs;
}

C &C::operator=(const C &lhs)
{
	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
}

C ::~C()
{
}

