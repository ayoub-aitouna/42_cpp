#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
template <typename T>
class Array
{
public:
    Array();
    Array(Array &lhs);
    Array(unsigned int size);
    Array &operator=(const Array &lhs);
    T &operator[](const size_t index);
    ~Array();

public:
    size_t size() const;

private:
    T *elememts;
    T default_value;
    size_t m_size;
};

#include "Array.tpp"
#endif
