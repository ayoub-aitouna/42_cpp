#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

class PmergeMe
{
public:
    PmergeMe();
    PmergeMe(PmergeMe &lhs);
    PmergeMe &operator=(const PmergeMe &lhs);
    ~PmergeMe();

private:
    std::vector<int> m_vector_set;
};

#endif
