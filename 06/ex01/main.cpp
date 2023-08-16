#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data d(12, "ss", "s_s");
	std::cout << &d << std::endl;
	uintptr_t add = Serializer::serialize(&d);
	std::cout << add << std::endl;
	std::cout << *Serializer::deserialize(add) << std::endl;
	std::cout << Serializer::deserialize(add) << std::endl;
}