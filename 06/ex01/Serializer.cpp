#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(Serializer &lhs)
{
	*this = lhs;
}

Serializer &Serializer::operator=(const Serializer &lhs)
{
	(void)lhs;
	return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}