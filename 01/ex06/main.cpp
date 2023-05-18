#include "Harl.hpp"

int main(int ac, char **av)
{
    if(ac < 2)
        return (1);
    Harl logger = Harl(av[1]);
    logger.complain("DEBUG");
    logger.complain("INFO");
    logger.complain("WARNING");
    logger.complain("ERROR");

    // logger.complain("DEBUG");
    // logger.complain("INFO");
    // logger.complain("WARNING");
    // logger.complain("ERROR");

    return (0);
}