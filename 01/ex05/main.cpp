#include "Harl.hpp"

int main(void)
{
    Harl logger = Harl();
    logger.complain("DEBUG");
    logger.complain("INFO");
    logger.complain("WARNING");
    logger.complain("ERROR");

    logger.complain("DEBUG");
    logger.complain("INFO");
    logger.complain("WARNING");
    logger.complain("ERROR");

    return (0);
}