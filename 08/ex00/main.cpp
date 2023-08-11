#include "easyfind.hpp"
#include <algorithm>
#include <vector>
#include <iostream>

#include <exception>

int main()
{
    int arr[] = {11, 22, 55, 55, 55, 44, 55};
    std::vector<int> myVector(arr, arr + sizeof(arr) / sizeof(int));

    std::string str = "assdfAAAsdsdf";
    std::cout << "searching in str ... " << easyfind(str, 'A') << std::endl;
    std::cout << "searching in myVector ... " << easyfind(myVector, 55) << std::endl;

    std::cout << "searching for invalide value" << std::endl;

    try
    {
        std::cout << "shearch in str " << easyfind(str, 'X') << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << '\n'
                  << e.what() << '\n';
    }

    try
    {
        std::cout << "shearch in myVector " << easyfind(myVector, 5665) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << '\n'
                  << e.what() << '\n';
    }
}