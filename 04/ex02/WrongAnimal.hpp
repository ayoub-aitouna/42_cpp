#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal();
    ~WrongAnimal();
    void makeSound(void) const;
    std::string getType(void) const;

protected:
    std::string type;
};
#endif