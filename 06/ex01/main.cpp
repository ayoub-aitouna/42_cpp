#include "Serializer.hpp"
#include <iostream>

struct Data{
	int a;
};

int	main(void)
{
	{
		std::cout << "************* ex01 ******************" << std::endl;
		Data d;
		Data *new_d;
		d.a = 98;
		std::cout << "ORIGINAL ADDRESS VALUE		" << &d << std::endl;
		uintptr_t add = Serializer::serialize(&d);
		new_d = Serializer::deserialize(add);
		std::cout << "SERIALIZED VALUE			" <<  add << std::endl;
		std::cout << "DESERIALIZED STRUCT Member Value	"<< new_d->a  << std::endl;
		std::cout << "DESERIALIZED ADDRESS Value		"<<Serializer::deserialize(add) << std::endl;
	}

}