#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &);
    Dog &operator=(const Dog &);
    virtual ~Dog();

private:
    Brain *brain;

public:
    void makeSound(void) const;
    Brain *getBrain(void) const;
};
#endif