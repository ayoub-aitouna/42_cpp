#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Invalide Argument number" << std::endl;
        return (1);
    }

    Harl logger = Harl(av[1]);

    logger.complain("WARNING");
    logger.complain("ERROR");
    logger.complain("DEBUG");
    logger.complain("INFO");
    return (0);
}