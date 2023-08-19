#include "easyfind.hpp"

int main()
{
    int arr[] = {11, 22, 55, 55, 55, 44, 55};
    std::vector<int> myVector(arr, arr + sizeof(arr) / sizeof(int));
    std::list<int> m_list(arr, arr + sizeof(arr) / sizeof(int));
    try
    {
        std::cout << easyfind(myVector, 44) << std::endl;
        std::cout << easyfind(myVector, 44) << std::endl;
        std::cout << easyfind(myVector, 19999) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}