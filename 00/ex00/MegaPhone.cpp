
#include <cctype>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>

int main(int ac, char **av)
{
	std::string result = "";
	std::string value;

	if(ac == 1)
	{
		std::cout << "LOARD UNBERABLE NOISE!" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac ; i++) {
		value = av[i];
		for (int j = 0; j < value.length(); j++)
			result += std::toupper(value[j]);
	}
	std::cout << result << std::endl;

	return (0);
}
