#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack &lhs)
{
	*this = lhs;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &lhs)
{
	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

#endif