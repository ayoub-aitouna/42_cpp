#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    const unsigned int N = 100000;
    srand((unsigned)time(NULL));

    {
        std::cout << "\n ----------- SUBJECT TEST -------------\n"
                  << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp(N);
        std::cout << "\n ----------- FILL NUMBER BY NUMBER -------------\n"
                  << std::endl;
        for (size_t i = 0; i < N; i++)
            sp.addNumber(rand());
        std::cout
            << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "\n ----------- FILL by Itterator -------------\n"
                  << std::endl;
    }
    {
        Span sp(N);
        std::vector<int> nums(N);
        std::generate(nums.begin(), nums.end(), std::rand);
        sp.addNumber(nums.begin(), nums.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    return EXIT_SUCCESS;
}