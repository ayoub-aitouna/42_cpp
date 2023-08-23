#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

int is_number(std::string anum)
{
	std::string::iterator it = anum.begin();
	while (it != anum.end() && *it == ' ')
		it++;
	if (*it == '-' || *it == '+')
		it++;
	if (it == anum.end())
		return (false);
	while (it != anum.end())
	{
		if (!std::isdigit(*it))
			return false;
		it++;
	}
	return (true);
}

PmergeMe::PmergeMe(int ac, char **list)
{
	for (int i = 1; i < ac; i++)
	{
		if (!is_number(list[i]))
			throw std::runtime_error("Error");
		m_vector.push_back(atoi(list[i]));
	}

	for (std::vector<int>::iterator i = this->m_vector.begin(); i != this->m_vector.end(); i++)
		m_deque.push_back(*i);

	// for (std::deque<int>::iterator i = this->m_deque.begin(); i != this->m_deque.end(); i++)
	// 	std::cout << *i << std::endl;
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
