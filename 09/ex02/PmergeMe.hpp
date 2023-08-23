#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>

class PmergeMe
{
public:
    PmergeMe();
    PmergeMe(int ac, char** list);
    PmergeMe(PmergeMe &lhs);
    PmergeMe &operator=(const PmergeMe &lhs);
    void marge_sort();
    ~PmergeMe();

private:
    std::vector<int> m_vector;
    std::deque<int>  m_deque;
};

#endif
