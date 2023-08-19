#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T, typename container>
MutantStack<T, container >::MutantStack()
{
}

template <typename T, typename container>
MutantStack<T, container >::MutantStack(MutantStack<T, container > &lhs)
{
	*this = lhs;
}

template <typename T, typename container>
MutantStack<T, container > &MutantStack<T, container>::operator=(const MutantStack &lhs)
{
	std::stack<T, container>::operator=(lhs);
	return (*this);
}

template <typename T, typename container>
MutantStack<T, container>::~MutantStack()
{
}

template <typename T, typename container>
typename MutantStack<T, container>::iterator MutantStack<T, container>::begin()
{
	return (this->c.begin());
}

template <typename T, typename container>
typename MutantStack<T, container>::iterator MutantStack<T, container>::end()
{
	return (this->c.end());
}
#endif