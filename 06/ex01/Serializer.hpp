#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
typedef unsigned long	uintptr_t;
class					Data;
class Serializer
{
  private:
	Serializer();
	Serializer(Serializer &lhs);

  public:
	Serializer &operator=(const Serializer &lhs);
	~Serializer();

  public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};
#endif