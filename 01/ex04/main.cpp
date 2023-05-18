#include <string>
#include <fstream>
#include <iostream>
#include "Replace.hpp"

// takes 3 argument <filename> <s1> <s2>

/**
 * open File std::ifstream file (<filename>)
 */

int main(int ac, char **av)
{
    if (ac < 4)
        return (1);
    Replace replace(av[1], av[2], av[3]);
    replace.CopyAndReplace();
    return (0);
}