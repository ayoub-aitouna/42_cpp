
#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"
#include <exception>
#include <ostream>
template <typename T>
Array<T>::Array()
{
    this->elememts = NULL;
}

template <typename T>
Array<T>::Array(unsigned int size)
{
    this->m_size = size;
    this->elememts = new T[size];
}
template <typename T>
Array<T>::Array(Array &lhs)
{
    *this = lhs;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &lhs)
{
    if (this != &lhs && lhs.size() != 0)
    {
        this->elememts = new T[lhs.size()];
        this->m_size = lhs.size();
        for (size_t i = 0; i < lhs.size(); i++)
            this->elememts[i] = lhs.elememts[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](const size_t index)
{
    if (this->elememts == NULL)
        return (this->default_value);
    if (index >= m_size || index < 0)
        throw std::runtime_error("index out of bound exception");
    return this->elememts[index];
}

template <typename T>
std::ostream &operator<<(std::ostream &os, Array<T> &lhs)
{
    if (lhs.size() == 0)
        return (os);
    for (size_t i = 0; i < lhs.size(); i++)
        std::cout << "a[" << i << "] = <" << lhs[i] << "> " << std::endl;
    return (os);
}

template <typename T>
size_t Array<T>::size() const
{
    return (this->m_size);
}

template <typename T>
Array<T>::~Array()
{
    if (this->elememts != NULL)
        delete[] this->elememts;
}
#endif