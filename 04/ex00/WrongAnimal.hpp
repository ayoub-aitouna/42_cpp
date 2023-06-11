#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal &operator=(const WrongAnimal&);
		~WrongAnimal();

	protected:
		std::string type;

	public:
		void makeSound(void) const;
		std::string getType(void) const;
};
#endif
