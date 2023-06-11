#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
public:
    Animal();
    Animal(const Animal &copy);
    Animal &operator=(const Animal &copy);
    virtual ~Animal();

protected:
    std::string type;

public:
    virtual void makeSound(void) const;
    std::string getType(void) const;
};
#endif
