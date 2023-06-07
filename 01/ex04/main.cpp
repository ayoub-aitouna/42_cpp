#include <string>
#include <fstream>
#include <iostream>
#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Invalide number of arguments " << std::endl;
        return (1);
    }
    Replace replace(av[1], av[2], av[3]);
    replace.CopyAndReplace();
    return (0);
}