#include "iter.hpp"
#include <ostream>
#include <iostream>

int main()
{
    std::cout << "Testing with Float" << std::endl;
    float farr[] = {0.f, 62.f, 65.1f, 127.f};
    iter(farr, 4, print_array_element);
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "Testing with Double" << std::endl;
    double darr[] = {0.002, 62.002, 65.1002, 127.002};
    iter(darr, 4, print_array_element);
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "Testing with Int" << std::endl;
    int iarr[] = {0, 62, 65, 127};
    iter(iarr, 4, print_array_element);
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "Testing with char" << std::endl;
    char carr[] = {0, 62, 65, 127};
    iter(carr, 4, print_array_element);
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "Testing with string" << std::endl;
    std::string sarr[] = {"0", "62", "65", "127"};
    iter(farr, 4, print_array_element);
    std::cout << "-----------------------------------" << std::endl;
}