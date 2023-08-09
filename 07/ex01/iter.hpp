#include <iostream>

template <typename T>
void iter(T *t1, int size, void (*fun)(T &))
{
    for (int i = 0; i < size; i++)
        fun(t1[i]);
}

template <typename T>
void print_array_element(T &element)
{
    std::cout << element << std::endl;
}