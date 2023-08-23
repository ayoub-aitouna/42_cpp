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
    PmergeMe(int ac, char **list);
    PmergeMe(PmergeMe &lhs);
    PmergeMe &operator=(const PmergeMe &lhs);

    clock_t Sort(int type);

    void VecMergeSort(std::vector<int> &arr, int left, int right);
    void Vecmerge(std::vector<int> &arr, int left, int middel, int right);
    void VecInsertionsort(std::vector<int> &arr, int left, int right);

    void DequeMergeSort(std::deque<int> &arr, int left, int right);
    void Dequemerge(std::deque<int> &arr, int left, int middel, int right);
    void DequeInsertionsort(std::deque<int> &arr, int left, int right);

    void printSet(std::string msg);
    ~PmergeMe();

private:
    std::vector<int> m_vector;
    std::deque<int> m_deque;
    
};

template <typename T>
bool is_sorted(T begin, T end)
{
    for (T i = begin; i != end - 1; i++)
    {
        if (*i > *(i + 1))
        {
            std::cout << "error in  " << *i << " & " << *(i + 1) << std::endl;
            return (false);
        }
    }
    return (true);
}

#endif
