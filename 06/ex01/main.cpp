#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data d(12, "ss", "s_s");
	uintptr_t add = Serializer::serialize(&d);
	std::cout << *Serializer::deserialize(add) << std::endl;
}