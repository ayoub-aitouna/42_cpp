#include "PmergeMe.hpp"
#include <algorithm>
#include <ctime>

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

void PmergeMe::printSet(std::string msg)
{
	std::cout << msg << "\t";
	for (std::vector<int>::iterator i = this->m_vector.begin(); i != this->m_vector.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

clock_t PmergeMe::Sort(int type)
{
	clock_t start, end;
	start = clock();
	switch (type)
	{
	case 1:
		VecMergeSort(m_vector, 0, m_vector.size() - 1);
		break;
	case 2:
		DequeMergeSort(m_deque, 0, m_deque.size() - 1);
		break;
	}
	end = clock();
	return (end - start);
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

	printSet("before");
	clock_t vec_time = Sort(1);
	clock_t deque_time = Sort(2);
	printSet("After");

	std::cout << "Time to process a range of " << m_vector.size() << " elements with std::vector<int> : " << vec_time << " us" << std::endl;
	std::cout << "Time to process a range of " << m_deque.size() << " elements with std::deque<int> : " << deque_time << " us" << std::endl;
}

void PmergeMe::VecMergeSort(std::vector<int> &arr, int left, int right)
{
	if ((right - left) <= 6)
		return VecInsertionsort(arr, left, right);
	int middel = left + (right - left) / 2;
	VecMergeSort(arr, left, middel);
	VecMergeSort(arr, middel + 1, right);
	Vecmerge(arr, left, middel, right);
}

void PmergeMe::Vecmerge(std::vector<int> &arr, int left, int middel, int right)
{
	size_t frst_chnk_size = middel - left + 1;
	size_t scnd_chnk_size = right - middel;
	size_t i = 0, j = 0, k = left;

	std::vector<int> frst_chnk(arr.begin() + left, arr.begin() + middel + 1);
	std::vector<int> scnd_chnk(arr.begin() + middel + 1, arr.begin() + right + 1);

	while (i < frst_chnk_size && j < scnd_chnk_size)
	{
		if (frst_chnk[i] <= scnd_chnk[j])
			arr[k++] = frst_chnk[i++];
		else
			arr[k++] = scnd_chnk[j++];
	}

	while (i < frst_chnk_size)
		arr[k++] = frst_chnk[i++];

	while (j < scnd_chnk_size)
		arr[k++] = scnd_chnk[j++];
}

void PmergeMe::VecInsertionsort(std::vector<int> &arr, int left, int right)
{
	int tmp;
	int j;
	for (int i = left + 1; i <= right; i++)
	{
		tmp = arr[i];
		j = i - 1;
		while (j >= left && arr[j] > tmp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
}

void PmergeMe::DequeMergeSort(std::deque<int> &arr, int left, int right)
{
	if ((right - left) <= 6)
		return DequeInsertionsort(arr, left, right);
	int middel = left + (right - left) / 2;
	DequeMergeSort(arr, left, middel);
	DequeMergeSort(arr, middel + 1, right);
	Dequemerge(arr, left, middel, right);
}

void PmergeMe::Dequemerge(std::deque<int> &arr, int left, int middel, int right)
{
	size_t frst_chnk_size = middel - left + 1;
	size_t scnd_chnk_size = right - middel;
	size_t i = 0, j = 0, k = left;

	std::deque<int> frst_chnk(arr.begin() + left, arr.begin() + middel + 1);
	std::deque<int> scnd_chnk(arr.begin() + middel + 1, arr.begin() + right + 1);

	while (i < frst_chnk_size && j < scnd_chnk_size)
	{
		if (frst_chnk[i] <= scnd_chnk[j])
			arr[k++] = frst_chnk[i++];
		else
			arr[k++] = scnd_chnk[j++];
	}

	while (i < frst_chnk_size)
		arr[k++] = frst_chnk[i++];

	while (j < scnd_chnk_size)
		arr[k++] = scnd_chnk[j++];
}

void PmergeMe::DequeInsertionsort(std::deque<int> &arr, int left, int right)
{
	int tmp;
	int j;
	for (int i = left + 1; i <= right; i++)
	{
		tmp = arr[i];
		j = i - 1;
		while (j >= left && arr[j] > tmp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
}

PmergeMe::PmergeMe(PmergeMe &lhs)
{
	*this = lhs;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &lhs)
{
	if (this != &lhs)
	{
		this->m_deque = lhs.m_deque;
		this->m_vector = lhs.m_vector;
	}
	return (*this);
}

PmergeMe ::~PmergeMe()
{
}
