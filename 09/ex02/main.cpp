#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "please provide a set of positive integerge " << std::endl;
		return (1);
	}
	try
	{
		PmergeMe pmegr(ac, av);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}