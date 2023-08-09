#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> org(5);

    Array<int> COPY_ASSINGMENT = org;

    Array<int> COPY_CONSTRUCTOR(org);

    std::cout
        << "Default Values of org"
        << std::endl;
    std::cout << org;
    std::cout
        << "*********************** \n"
        << std::endl;

    std::cout << "Default Values of COPY_ASSINGMENT" << std::endl;
    std::cout << COPY_ASSINGMENT;
    std::cout << "*********************** \n"
              << std::endl;

    std::cout << "Default Values COPY_CONSTRUCTOR" << std::endl;
    std::cout << COPY_CONSTRUCTOR;
    std::cout << "*********************** \n"
              << std::endl;

    // CHANGE VALUES
    std::cout << "Change the 3 arrays Values \n"
              << std::endl;

    std::cout << "\033[32m"
              << "Change Values of org"
              << "\033[0m" << std::endl;
    for (size_t i = 0; i < org.size(); i++)
        org[i] = i * 2;
    std::cout
        << "*********************** \n"
        << std::endl;

    std::cout << "\033[32m"
              << "Change Values of COPY_ASSINGMENT"
              << "\033[0m" << std::endl;
    for (size_t i = 0; i < org.size(); i++)
        org[i] = i + 2;
    std::cout << "*********************** \n"
              << std::endl;

    std::cout << "\033[32m"
              << "Change Values COPY_CONSTRUCTOR"
              << "\033[0m" << std::endl;
    for (size_t i = 0; i < org.size(); i++)
        org[i] = i - 2;
    std::cout << "*********************** \n"
              << std::endl;

    std::cout << "New Values of org" << std::endl;
    std::cout << org;
    std::cout
        << "*********************** \n"
        << std::endl;

    std::cout << "New Values of COPY_ASSINGMENT" << std::endl;
    std::cout << COPY_ASSINGMENT;
    std::cout << "*********************** \n"
              << std::endl;

    std::cout << "New Values COPY_CONSTRUCTOR" << std::endl;
    std::cout << COPY_CONSTRUCTOR;
    std::cout << "*********************** \n"
              << std::endl;

    try
    {
        std::cout << "out of index   : " << org[3000] << ">" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}