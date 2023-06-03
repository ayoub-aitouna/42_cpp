#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
public:
    Animal();
    virtual ~Animal();
    virtual void makeSound(void) const = 0;
    std::string getType(void) const;

protected:
    std::string type;
};
#endif