#include "A.hpp"

A::A()
{
}

A::A(A &lhs) : Base()
{
	*this = lhs;
}

A &A::operator=(const A &lhs)
{
	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
}

A ::~A()
{
}

