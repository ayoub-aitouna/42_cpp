#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack &lhs);
	MutantStack &operator=(const MutantStack &lhs);
	~MutantStack();

public:
	typedef iterator c::iterator;
	iterator begin();
	iterator end();

private:
};
#include "MutantStack.tpp"
#endif
