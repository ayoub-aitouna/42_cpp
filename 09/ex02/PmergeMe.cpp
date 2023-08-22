#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe &lhs)
{
	*this = lhs;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &lhs)
{
	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
}

PmergeMe ::~PmergeMe()
{
}

