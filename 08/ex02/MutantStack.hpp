#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
public:
	MutantStack();
	MutantStack(MutantStack &lhs);
	MutantStack &operator=(const MutantStack &lhs);
	~MutantStack();

public:
	typedef typename container::iterator iterator;
	iterator begin();
	iterator end();

private:
};
#include "MutantStack.tpp"
#endif
