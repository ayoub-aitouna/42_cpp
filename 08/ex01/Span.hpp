#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <limits>
#include <list>

class Span
{
public:
    Span();
    Span(unsigned int N);
    Span(Span &lhs);
    Span &operator=(const Span &lhs);
    ~Span();

public:
    void addNumber(int number);
    void addNumber(std::vector<int>::iterator beign, std::vector<int>::iterator end);
    void sort();
    int shortestSpan();
    int longestSpan();

private:
    unsigned int N;
    std::vector<int> container;
};

#endif
