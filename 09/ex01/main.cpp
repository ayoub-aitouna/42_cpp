#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "please  pass an argument " << std::endl
                  << "example : \"8 9 * 9 - 9 - 9 - 4 - 1 +\" " << std::endl;
        return (1);
    }
    try
    {
        RPN m_rpn(av[1]);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}