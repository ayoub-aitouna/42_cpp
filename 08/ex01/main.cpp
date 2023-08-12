#include "Span.hpp"
#include <iostream>

int main()
{
    const unsigned int N = 10000;
    float progress;
    srand((unsigned)time(NULL));
    Span sp(N);
    std::cout << "\n ----------- FILL NUMBER BY NUMBER -------------\n\n"
              << std::endl;
    for (size_t i = 0; i < N; i++)
    {
        progress = (((float)(i) / (float)N) * 100) + 1;
        std::cout
            << "\033[A\33[2K\rprogress: "
            << (progress <= 100 ? progress : 100.f) << "%" << std::endl;
        sp.addNumber(rand());
    }
    std::cout << std::endl;
    std::cout
        << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "\n ----------- FILL by Itterator -------------\n"
              << std::endl;
    Span n_sp(N);

    std::vector<int> nums(N);
    std::generate(nums.begin(), nums.end(), std::rand);
    n_sp.addNumber(nums.begin(), nums.end());
    std::cout << n_sp.shortestSpan() << std::endl;
    std::cout << n_sp.longestSpan() << std::endl;
    return EXIT_SUCCESS;
}