#include "B.hpp"

B::B()
{
}

B::B(B &lhs) : Base()
{
	*this = lhs;
}

B &B::operator=(const B &lhs)
{
	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
}

B ::~B()
{
}
