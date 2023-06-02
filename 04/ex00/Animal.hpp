#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
public:
    Animal();
    ~Animal();
    virtual void makeSound(void) const;
    std::string getType(void) const;

protected:
    std::string type;
};
#endif