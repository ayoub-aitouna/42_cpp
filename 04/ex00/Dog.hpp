#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &);
    Dog &operator=(const Dog &);
   virtual ~Dog();

public:
    void makeSound(void) const;
};
#endif
